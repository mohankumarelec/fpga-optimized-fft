`timescale 1ns / 1ps

module multiplier(
    input signed [15:0] inp1,
    input signed [15:0] inp2,
    output signed[15:0] out
    );
	reg signed [31:0] inp12;
	always @ ( * )
		begin
			inp12 = inp1*inp2;
		end
	assign out = inp12 [23:8];
endmodule
