`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:25:04 04/10/2019
// Design Name:   multiplier
// Module Name:   /home/ise/DDP/xilinx project/FFT8_implementation_4/multi_tb.v
// Project Name:  FFT8_implementation_4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: multiplier
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module multi_tb;

	// Inputs
	reg clock;
	reg reset;
	reg start;
	reg [31:0] angle_in;
	reg [15:0] initial_value;

	// Outputs
	wire [15:0] cos_out;
	wire [15:0] sin_out;
	wire out_stb;

	// Instantiate the Unit Under Test (UUT)
	multiplier uut (
		.clock(clock), 
		.reset(reset), 
		.start(start), 
		.angle_in(angle_in), 
		.cos_out(cos_out), 
		.sin_out(sin_out), 
		.initial_value(initial_value), 
		.out_stb(out_stb)
	);
          always #5 clock = ~clock;

	initial begin
		// Initialize Inputs
		clock = 0;
		reset = 0;
		start = 0;
		angle_in = 32'h3243f6a9;
		initial_value = 16'b00000001_00000000;

		// Wait 100 ns for global reset to finish
		#100;
    
        $display("c r s cos      sin");
        $display("- - - -------- --------");
        #12 reset = 1;
        #15 reset = 0;
        #20 start = 1;
        #10 start = 0;
        #800 $display("sin: %f ,cos: %f", $itor(sin_out)*2.0**-8.0,$itor(cos_out)*2.0**-8.0);

	end
      
endmodule

