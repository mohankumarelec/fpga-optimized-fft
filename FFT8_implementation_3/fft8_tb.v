`timescale 1ns / 1ps
module fft8_tb;

	// Inputs
	reg [15:0] inp1;
	reg [15:0] inp2;
	reg [15:0] inp3;
	reg [15:0] inp4;
	reg [15:0] inp5;
	reg [15:0] inp6;
	reg [15:0] inp7;
	reg [15:0] inp8;
	reg clk;
	reg rst;

	// Outputs
	wire [15:0] out1_real;
	wire [15:0] out1_imag;
	wire [15:0] out2_real;
	wire [15:0] out2_imag;
	wire [15:0] out3_real;
	wire [15:0] out3_imag;
	wire [15:0] out4_real;
	wire [15:0] out4_imag;
	wire [15:0] out5_real;
	wire [15:0] out5_imag;
	wire [15:0] out6_real;
	wire [15:0] out6_imag;
	wire [15:0] out7_real;
	wire [15:0] out7_imag;
	wire [15:0] out8_real;
	wire [15:0] out8_imag;
	wire out_stb;

	// Instantiate the Unit Under Test (UUT)
	fft8 uut (
		.inp1(inp1), 
		.inp2(inp2), 
		.inp3(inp3), 
		.inp4(inp4), 
		.inp5(inp5), 
		.inp6(inp6), 
		.inp7(inp7), 
		.inp8(inp8), 
		.clk(clk), 
		.rst(rst),
		.out1_real(out1_real), 
		.out1_imag(out1_imag), 
		.out2_real(out2_real), 
		.out2_imag(out2_imag), 
		.out3_real(out3_real), 
		.out3_imag(out3_imag), 
		.out4_real(out4_real), 
		.out4_imag(out4_imag), 
		.out5_real(out5_real), 
		.out5_imag(out5_imag), 
		.out6_real(out6_real), 
		.out6_imag(out6_imag), 
		.out7_real(out7_real), 
		.out7_imag(out7_imag), 
		.out8_real(out8_real), 
		.out8_imag(out8_imag),
		.out_stb(out_stb)
	);

	initial begin
		// Initialize Inputs
		inp1 = 16'b00000000_00000000;
		inp2 = 16'b00000001_00000000;
		inp3 = 16'b00000010_00000000;
		inp4 = 16'b00000011_00000000;
		inp5 = 16'b00000100_00000000;
		inp6 = 16'b00000101_00000000;
		inp7 = 16'b00000110_00000000;
		inp8 = 16'b00000111_00000000;
		clk = 0;
		rst = 1'b1;
		#50 rst = 1'b0;
		// Wait 100 ns for global reset to finish
		#100;
		// Add stimulus here
	end

	always
		begin
			#5 clk = ~clk;
		end

endmodule

