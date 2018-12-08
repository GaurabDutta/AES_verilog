`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:01:25 12/06/2018 
// Design Name: 
// Module Name:    Key_schedule 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Key_schedule(clk,key_in,key_out,Rcon);
		input clk;
		input [31:0]Rcon;
		input [127:0]key_in;
		output reg [127:0]key_out;
		
//		wire [31:0]Rcon[9:0];
		reg [31:0]col[3:0];
		reg [31:0]temp;
		wire [31:0]s_out;
		reg [31:0]round[3:0];

/*	assign Rcon[0] = 32'h36000000;
	assign Rcon[1] = 32'h1b000000;
	assign Rcon[2] = 32'h80000000;
	assign Rcon[3] = 32'h40000000;
	assign Rcon[4] = 32'h20000000;
	assign Rcon[5] = 32'h10000000;
	assign Rcon[6] = 32'h08000000;
	assign Rcon[7] = 32'h04000000;
	assign Rcon[8] = 32'h02000000;
	assign Rcon[9] = 32'h01000000;*/

	S_Box s0(temp[7:0],s_out[7:0]);
	S_Box s1(temp[15:8],s_out[15:8]);
	S_Box s2(temp[23:16],s_out[23:16]);
	S_Box s3(temp[31:24],s_out[31:24]);

always@(posedge clk)
begin
	
{col[3],col[2],col[1],col[0]} = key_in;
	
	temp = {col[0][23:0],col[0][31:24]};
	
	round[3] = col[3] ^ s_out ^ Rcon;
	round[2] = round[3] ^ col[2];
	round[1] = round[2] ^ col[1];
	round[0] = round[1] ^ col[0];
	
key_out = {round[3],round[2],round[1],round[0]}; 
	
end		
	
endmodule
