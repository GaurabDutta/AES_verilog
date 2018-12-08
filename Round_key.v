`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:12:57 12/05/2018 
// Design Name: 
// Module Name:    Round_key 
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
module Round_key(clk, data_in, data_out, key);
		input clk;
		input [127:0] data_in;
		input [127:0] key;
		output reg [127:0] data_out;
		
		reg [127:0] temp;
		
always@(posedge clk)
begin
	
	temp <= data_in ^ key;
	data_out = temp;

end
endmodule
