`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:18:35 12/03/2018 
// Design Name: 
// Module Name:    MixCol 
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
module MixCol(clk,din,dout);
		input clk;
		input [127:0]din;
		output reg [127:0]dout;
		
		reg [127:0] temp;
		
always@(posedge clk)
begin
	temp <= din;
	
	dout[127:120] <= msb_check(temp[127:120]) ^ (msb_check(temp[119:112])^temp[119:112]) ^ temp[111:104] ^ temp[103:96];
	dout[119:112] <= temp[127:120] ^ msb_check(temp[119:112]) ^ (msb_check(temp[111:104])^temp[111:104]) ^ temp[103:96];
	dout[111:104] <= temp[127:120] ^ temp[119:112] ^ msb_check(temp[111:104]) ^ (msb_check(temp[103:96])^temp[103:96]);
	dout[103:96] <= (msb_check(temp[127:120])^temp[127:120]) ^ temp[119:112] ^ temp[111:104] ^ msb_check(temp[103:96]);
	
	dout[95:88] <= msb_check(temp[95:88]) ^ (msb_check(temp[87:80])^temp[87:80]) ^ temp[79:72] ^ temp[71:64];
	dout[87:80] <= temp[95:88] ^ msb_check(temp[87:80]) ^ (msb_check(temp[79:72])^temp[79:72]) ^ temp[71:64];
	dout[79:72] <= temp[95:88] ^ temp[87:80] ^ msb_check(temp[79:72]) ^ (msb_check(temp[71:64])^temp[71:64]);
	dout[71:64] <= (msb_check(temp[95:88])^temp[95:88]) ^ temp[87:80] ^ temp[79:72] ^ msb_check(temp[71:64]);
	
	dout[63:56] <= msb_check(temp[63:56]) ^ (msb_check(temp[55:48])^temp[55:48]) ^ temp[47:40] ^ temp[39:32];
	dout[55:48] <= temp[63:56] ^ msb_check(temp[55:48]) ^ (msb_check(temp[47:40])^temp[47:40]) ^ temp[39:32];
	dout[47:40] <= temp[63:56] ^ temp[55:48] ^ msb_check(temp[47:40]) ^ (msb_check(temp[39:32])^temp[39:32]);
	dout[39:32] <= (msb_check(temp[63:56])^temp[63:56]) ^ temp[55:48] ^ temp[47:40] ^ msb_check(temp[39:32]);
		
	dout[31:24] <= msb_check(temp[31:24]) ^ (msb_check(temp[23:16])^temp[23:16]) ^ temp[15:8] ^ temp[7:0];
	dout[23:16] <= temp[31:24] ^ msb_check(temp[23:16]) ^ (msb_check(temp[15:8])^temp[15:8]) ^ temp[7:0];
	dout[15:8] <= temp[31:24] ^ temp[23:16] ^ msb_check(temp[15:8]) ^ (msb_check(temp[7:0])^temp[7:0]);
	dout[7:0] <= (msb_check(temp[31:24])^temp[31:24]) ^ temp[23:16] ^ temp[15:8] ^ msb_check(temp[7:0]);
end
	
function [7:0] msb_check;
    input [7:0] x;
    begin
      msb_check = (x & 8'h80) ? ((x << 1) ^ 8'h1B) : (x << 1);
    end
  endfunction
endmodule
