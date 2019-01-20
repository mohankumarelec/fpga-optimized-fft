`timescale 1ns / 1ps


module multiplier_tb;

	// Inputs
	reg [15:0] inp1;
	reg [15:0] inp2;
	reg rst;
	reg clk;
	// Outputs
	wire [15:0] out;
	wire out_stb;

	// Instantiate the Unit Under Test (UUT)
	multiplier uut (
		.inp1(inp1), 
		.inp2(inp2), 
		.rst(rst), 
		.out(out), 
		.clk(clk),
		.out_stb(out_stb)
	);
   localparam sf = 2.0**-8.0;
	initial begin
		// Initialize Inputs
		inp1 = 16'b11110111_10000000;
		inp2 = 16'b11110101_10000000;
		rst = 1'b1;
		clk = 1'b0;
		// Wait 100 ns for global reset to finish
		#100;
		#20 rst = 1'b0;
  	   $display("%f + %f = %f", $itor(inp1)*sf, $itor(inp2)*sf, $itor(out)*sf);
 
		// Add stimulus here

	end
      
	always
		begin
			#5 clk = ~clk;
		end
endmodule

