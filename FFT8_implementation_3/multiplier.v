`timescale 1ns / 1ps

module multiplier(
    input signed [15:0] inp1,
    input signed [15:0] inp2,
	 input rst,
	 input clk,
    output signed [15:0] out,
	 output out_stb
);
   localparam sf = 2.0**-8.0;
	reg [29:0] inp12;
	reg [14:0] input_1;
	reg [14:0] input_2;
	reg output_stb;	
	reg out_sign;
	integer counter;
	assign out_stb = output_stb;
	initial 
		begin
			output_stb = 1'b0;
			inp12 = 32'b0;
			counter = 0;
		end

	always @ ( posedge clk )
		begin
			if (rst == 1'b1)
				begin
					output_stb = 1'b0;
					inp12 = 30'b0;	
					counter = 0;
				end
			else if (output_stb == 1'b0 && counter < 15)
				begin
					if (counter == 0)
						begin 
							out_sign = (inp1[15] && ~ inp2 [15]) + (inp2[15] && ~ inp1 [15]);
							input_1 = inp1[15]==1'b0 ? inp1[14:0] : ~inp1[14:0]+1'b1; 
							input_2 = inp2[15]==1'b0 ? inp2[14:0] : ~inp2[14:0]+1'b1; 
						end
					if(input_1[counter]==1'b1)
						begin
							inp12[29:14] = inp12[29:14] + input_2[14:0];
						end
					inp12 = inp12 >> 1;
					counter = counter + 1;
				end
			else if (counter >= 15)
				begin
					output_stb = 1'b1;					
					$display("%f * %f = %f ", $itor(inp1)*sf, $itor(inp2)*sf, $itor(out)*sf);
				end 
		end
	assign out = {out_sign,inp12[22:7]};
endmodule


