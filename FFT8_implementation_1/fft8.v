`timescale 1ns / 1ps

module fft8(
	input signed [15:0] inp1,
	input signed [15:0] inp2,
	input signed [15:0] inp3,
	input signed [15:0] inp4,
	input signed [15:0] inp5,
	input signed [15:0] inp6,
	input signed [15:0] inp7,
	input signed [15:0] inp8,
	input clk,
	input rst,
	output signed [15:0] out1_real,
	output signed [15:0] out1_imag,
	output signed [15:0] out2_real,
	output signed [15:0] out2_imag,
	output signed [15:0] out3_real,
	output signed [15:0] out3_imag,
	output signed [15:0] out4_real,
	output signed [15:0] out4_imag,
	output signed [15:0] out5_real,
	output signed [15:0] out5_imag,
	output signed [15:0] out6_real,
	output signed [15:0] out6_imag,
	output signed [15:0] out7_real,
	output signed [15:0] out7_imag,
	output signed [15:0] out8_real,
	output signed [15:0] out8_imag,
	output out_stb
);
	
	localparam signed sin_45 = 16'b00000000_10110101;
	localparam signed sin_315 = 16'b11111111_01001011;
	localparam signed sf = 2.0**-8.0;

	reg signed [31:0] t1_46,t2_46; 
	reg signed [15:0] t1,t2,t3,t4,t5,t6,t7,t8,m0,m1,m2,m3,m4,m5_imag,m6_imag,m7_imag,s1,s2,s3_imag,s4_imag;
	reg output_stb;
	
	initial 
		begin
			output_stb = 1'b0;
		end

	always @( posedge clk )
		begin
			if (rst == 1'b1)
				begin
					output_stb = 1'b0;
				end
			else
				begin
					t1 = inp1 + inp5;
					t2 = inp7 + inp3;
					t3 = inp2 + inp6;
					t5 = inp4 + inp8;
					m3 = inp1 - inp5;
					m6_imag = inp7 - inp3;
					t4 = inp2 - inp6;
					t6 = inp4 - inp8;
					t8 = t5 + t3;
					t7 = t1 + t2;
					m0 = t7 + t8;
					t1_46 = sin_45 * ( t4 - t6);
					m4 = t1_46 [23:8]; 
					m5_imag = t5 - t3;
					m2 = t1 - t2;
					m1 = t7 - t8;
					t2_46 = sin_315 * ( t4 + t6); 
					m7_imag = t2_46 [23:8];
					s1 = m3 + m4;
					s2 = m3 - m4;
					s3_imag = m6_imag + m7_imag;
					s4_imag = m6_imag - m7_imag;
					$display("out1: %f , %f ", $itor(out1_real)*sf, $itor(out1_imag)*sf);
					$display("out2: %f , %f ", $itor(out2_real)*sf, $itor(out2_imag)*sf);
					$display("out3: %f , %f ", $itor(out3_real)*sf, $itor(out3_imag)*sf);
					$display("out4: %f , %f ", $itor(out4_real)*sf, $itor(out4_imag)*sf);
					$display("out5: %f , %f ", $itor(out5_real)*sf, $itor(out5_imag)*sf);
					$display("out6: %f , %f ", $itor(out6_real)*sf, $itor(out6_imag)*sf);
					$display("out7: %f , %f ", $itor(out7_real)*sf, $itor(out7_imag)*sf);
					$display("out8: %f , %f ", $itor(out8_real)*sf, $itor(out8_imag)*sf);
					output_stb = 1'b1;
				end
		end
	assign out1_real = m0;
	assign out1_imag = 16'b0000000000000000;
	assign out2_real = s1;
	assign out2_imag = s3_imag;
	assign out3_real = m2;
	assign out3_imag = m5_imag;
	assign out4_real = s2;
	assign out4_imag = ~s4_imag + 1'b1;
	assign out5_real = m1;
	assign out5_imag = 16'b0000000000000000;
	assign out6_real = s2;
	assign out6_imag = s4_imag;
	assign out7_real = m2;
	assign out7_imag = ~m5_imag + 1'b1;
	assign out8_real = s1;
	assign out8_imag = ~s3_imag + 1'b1;
	assign out_stb = output_stb;
endmodule
