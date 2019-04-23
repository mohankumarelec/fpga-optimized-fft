`define K 32'h26dd3b6a  
`define BETA_0  32'h3243f6a9  // = atan 2^0     = 0.7853981633974483
`define BETA_1  32'h1dac6705  // = atan 2^(-1)  = 0.4636476090008061
`define BETA_2  32'h0fadbafd  // = atan 2^(-2)  = 0.24497866312686414
`define BETA_3  32'h07f56ea7  // = atan 2^(-3)  = 0.12435499454676144
`define BETA_4  32'h03feab77  // = atan 2^(-4)  = 0.06241880999595735
`define BETA_5  32'h01ffd55c  // = atan 2^(-5)  = 0.031239833430268277
`define BETA_6  32'h00fffaab  // = atan 2^(-6)  = 0.015623728620476831
`define BETA_7  32'h007fff55  // = atan 2^(-7)  = 0.007812341060101111
`define BETA_8  32'h003fffeb  // = atan 2^(-8)  = 0.0039062301319669718
`define BETA_9  32'h001ffffd  // = atan 2^(-9)  = 0.0019531225164788188
`define BETA_10 32'h00100000  // = atan 2^(-10) = 0.0009765621895593195
`define BETA_11 32'h00080000  // = atan 2^(-11) = 0.0004882812111948983
`define BETA_12 32'h00040000  // = atan 2^(-12) = 0.00024414062014936177
`define BETA_13 32'h00020000  // = atan 2^(-13) = 0.00012207031189367021
`define BETA_14 32'h00010000  // = atan 2^(-14) = 6.103515617420877e-05
`define BETA_15 32'h00008000  // = atan 2^(-15) = 3.0517578115526096e-05
`define BETA_16 32'h00004000  // = atan 2^(-16) = 1.5258789061315762e-05
`define BETA_17 32'h00002000  // = atan 2^(-17) = 7.62939453110197e-06
`define BETA_18 32'h00001000  // = atan 2^(-18) = 3.814697265606496e-06
`define BETA_19 32'h00000800  // = atan 2^(-19) = 1.907348632810187e-06
`define BETA_20 32'h00000400  // = atan 2^(-20) = 9.536743164059608e-07
`define BETA_21 32'h00000200  // = atan 2^(-21) = 4.7683715820308884e-07
`define BETA_22 32'h00000100  // = atan 2^(-22) = 2.3841857910155797e-07
`define BETA_23 32'h00000080  // = atan 2^(-23) = 1.1920928955078068e-07
`define BETA_24 32'h00000040  // = atan 2^(-24) = 5.960464477539055e-08
`define BETA_25 32'h00000020  // = atan 2^(-25) = 2.9802322387695303e-08
`define BETA_26 32'h00000010  // = atan 2^(-26) = 1.4901161193847655e-08
`define BETA_27 32'h00000008  // = atan 2^(-27) = 7.450580596923828e-09
`define BETA_28 32'h00000004  // = atan 2^(-28) = 3.725290298461914e-09
`define BETA_29 32'h00000002  // = atan 2^(-29) = 1.862645149230957e-09
`define BETA_30 32'h00000001  // = atan 2^(-30) = 9.313225746154785e-10
`define BETA_31 32'h00000000  // = atan 2^(-31) = 4.656612873077393e-10

module multiplier(
    clock,    
    reset,
	 start,
    angle_in, 
    sin_out,
	 initial_value,
	 out_stb
);

input clock;
input reset;
input [31:0] angle_in;
input start;
input signed [15:0] initial_value;
output out_stb;
reg out_stb_reg;
output signed [15:0] sin_out;
assign out_stb = out_stb_reg;
wire [15:0] sin_out = sin_final[23:8];

reg signed [31:0] cos_final;
reg signed [31:0] sin_final;

reg signed [31:0] cos;
reg signed [31:0] sin;
reg [31:0] angle;
reg [4:0] count;
reg state;

reg [31:0] cos_next;
reg [31:0] sin_next;
reg [31:0] angle_next;
reg [4:0] count_next;
reg state_next;

always @(posedge clock or posedge reset) begin
    if (reset) begin
        cos <= 0;
        sin <= 0;
        angle <= 0;
        count <= 0;
        state <= 0;
    end else begin
        cos <= cos_next;
        sin <= sin_next;
        angle <= angle_next;
        count <= count_next;
        state <= state_next;
    end
end

always @* begin
    cos_next = cos;
    sin_next = sin;
    angle_next = angle;
    count_next = count;
    state_next = state;
    
    if (state) begin
        cos_next = cos + (direction_negative ? sin_shr : -sin_shr);
        sin_next = sin + (direction_negative ? -cos_shr : cos_shr);
        angle_next = angle + (direction_negative ? beta : -beta);
        count_next = count + 1;
        if (count == 31) begin
            state_next = 0;
				out_stb_reg = 1'b1;
				sin_final = {sin[31],6'b000000,sin[31:22]} * initial_value;
        end
    end
    
    else begin
        if (start) begin
            cos_next = `K;         
            sin_next = 0;          
            angle_next = angle_in;
            count_next = 0;     
            state_next = 1;     
        end
    end
end

wire [31:0] cos_signbits = {32{cos[31]}};
wire [31:0] sin_signbits = {32{sin[31]}};
wire [31:0] cos_shr = {cos_signbits, cos} >> count;
wire [31:0] sin_shr = {sin_signbits, sin} >> count;
wire direction_negative = angle[31];
wire [31:0] beta_lut [0:31];
assign beta_lut[0] = `BETA_0;
assign beta_lut[1] = `BETA_1;
assign beta_lut[2] = `BETA_2;
assign beta_lut[3] = `BETA_3;
assign beta_lut[4] = `BETA_4;
assign beta_lut[5] = `BETA_5;
assign beta_lut[6] = `BETA_6;
assign beta_lut[7] = `BETA_7;
assign beta_lut[8] = `BETA_8;
assign beta_lut[9] = `BETA_9;
assign beta_lut[10] = `BETA_10;
assign beta_lut[11] = `BETA_11;
assign beta_lut[12] = `BETA_12;
assign beta_lut[13] = `BETA_13;
assign beta_lut[14] = `BETA_14;
assign beta_lut[15] = `BETA_15;
assign beta_lut[16] = `BETA_16;
assign beta_lut[17] = `BETA_17;
assign beta_lut[18] = `BETA_18;
assign beta_lut[19] = `BETA_19;
assign beta_lut[20] = `BETA_20;
assign beta_lut[21] = `BETA_21;
assign beta_lut[22] = `BETA_22;
assign beta_lut[23] = `BETA_23;
assign beta_lut[24] = `BETA_24;
assign beta_lut[25] = `BETA_25;
assign beta_lut[26] = `BETA_26;
assign beta_lut[27] = `BETA_27;
assign beta_lut[28] = `BETA_28;
assign beta_lut[29] = `BETA_29;
assign beta_lut[30] = `BETA_30;
assign beta_lut[31] = `BETA_31;
wire [31:0] beta = beta_lut[count];
endmodule
