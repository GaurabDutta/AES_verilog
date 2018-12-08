`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:09:27 11/23/2018 
// Design Name: 
// Module Name:    ShiftRows 
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
module ShiftRows(clk,data,out);
		input clk;
		input [127:0] data;
		output reg[127:0] out;
		
		reg [127:0]temp;
//		reg [31:0] row[3:0];
		
always@(posedge clk)
begin

	temp = data;
	
	out = {temp[127:120], temp[87:80], temp[47:40], temp[7:0], 
				temp[95:88], temp[55:48], temp[15:8], temp[103:96], 
				temp[63:56], temp[23:16], temp[111:104], temp[71:64], 
				temp[31:24], temp[119:112], temp[79:72], temp[39:32]};


/*	{row[3], row[2], row[1], row[0]} = data;

		row[1] = {row[1][23:0], row[1][31:24]};
      row[2] = {row[2][15:0], row[2][31:16]};
      row[3] = {row[3][7:0], row[3][31:8]};
	
	out = {row[3], row[2], row[1], row[0]};*/
	
	/*row[0] = {data[127:120], data[95:88], data[63:56], data[31:24]};
	row[1] = {data[87:80], data[55:48], data[26:16], data[119:112]};
	row[2] = {data[47:40], data[15:8], data[111:104], data[79:72]};
	row[3] = {data[7:0], data[103:96], data[71:64], data[39:32]};
	
	out[127:96] = {row[0][31:24], row[1][31:24], row[2][31:24], row[3][31:24]};
	out[95:64] = {row[0][23:16], row[1][23:16], row[2][23:16], row[3][23:16]};
	out[63:32] = {row[0][15:8], row[1][15:8], row[2][15:8], row[3][15:8]};
	out[31:0] = {row[0][7:0], row[1][7:0], row[2][7:0], row[3][7:0]};*/
	
end
endmodule

//blocking sped = 775.194MHZ
//non-blocking speed = 264.480MHz	<-- not working