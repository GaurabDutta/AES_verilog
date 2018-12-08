`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:04:02 12/07/2018
// Design Name:   AES
// Module Name:   C:/Users/GD/Documents/Xilinx/AES/AES_tb.v
// Project Name:  AES
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: AES
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module AES_tb;

	// Inputs
	reg [127:0] state_in;
	reg [127:0] cipher_key;
	reg [31:0] Rcon1;
	reg [31:0] Rcon2;
	reg [31:0] Rcon3;
	reg [31:0] Rcon4;
	reg [31:0] Rcon5;
	reg [31:0] Rcon6;
	reg [31:0] Rcon7;
	reg [31:0] Rcon8;
	reg [31:0] Rcon9;
	reg [31:0] Rcon10;

	// Outputs
	wire [127:0] state_out;

	// Instantiate the Unit Under Test (UUT)
	AES uut (
		.state_in(state_in), 
		.state_out(state_out), 
		.cipher_key(cipher_key), 
		.Rcon1(Rcon1), 
		.Rcon2(Rcon2), 
		.Rcon3(Rcon3), 
		.Rcon4(Rcon4), 
		.Rcon5(Rcon5), 
		.Rcon6(Rcon6), 
		.Rcon7(Rcon7), 
		.Rcon8(Rcon8), 
		.Rcon9(Rcon9), 
		.Rcon10(Rcon10)
	);

//   always #100 clk = ~clk;

	initial begin
		// Initialize Inputs
		state_in = 128'h3243f6a8885a308d313198a2e0370734;
		cipher_key = 128'h2b7e151628aed2a6abf7158809cf4f3c;
		Rcon1 = 32'h01000000;
		Rcon2 = 32'h02000000;
		Rcon3 = 32'h04000000;
		Rcon4 = 32'h08000000;
		Rcon5 = 32'h10000000;
		Rcon6 = 32'h20000000;
		Rcon7 = 32'h40000000;
		Rcon8 = 32'h80000000;
		Rcon9 = 32'h1b000000;
		Rcon10 = 32'h36000000;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

