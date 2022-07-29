`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:00:41 07/28/2022
// Design Name:   procesosSucesivos
// Module Name:   D:/circuitos/integracionDeEntidades/p.v
// Project Name:  integracionDeEntidades
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: procesosSucesivos
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module p;

	// Inputs
	reg clk;

	// Outputs
	wire [0:3] F;

	// Instantiate the Unit Under Test (UUT)
	procesosSucesivos uut (
		.clk(clk), 
		.F(F)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

