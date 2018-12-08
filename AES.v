`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:48:09 12/06/2018 
// Design Name: 
// Module Name:    AES 
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
module AES(state_in, state_out, cipher_key,Rcon1,Rcon2,Rcon3,Rcon4,Rcon5,Rcon6,Rcon7,Rcon8,Rcon9,Rcon10);
		input [127:0]state_in;
		input [127:0]cipher_key;
		input [31:0]Rcon1,Rcon2,Rcon3,Rcon4,Rcon5,Rcon6,Rcon7,Rcon8,Rcon9,Rcon10;
		output [127:0]state_out;
		
		wire [127:0]out1,out2,out3,out4,out5,out6,out7,out8,out9,out10,out11,out12,out13,out14,out15,out16,out17,out18,out19,out20,out21,out22,out23,out24,out25,out26,out27,out28,out29,out30,out31,out32,out33,out34,out35,out36,out37,out38,out39,out40;
		wire [127:0]key_out1,key_out2,key_out3,key_out4,key_out5,key_out6,key_out7,key_out8,key_out9,key_out10;

	Round_key m1(clk, state_in, out1, cipher_key);
	
//	S_Box m2(out1, out2);
		S_Box s0(out1[127:120], out2[127:120]);
		S_Box s1(out1[119:112], out2[119:112]);
		S_Box s2(out1[111:104], out2[111:104]);
		S_Box s3(out1[103:96], out2[103:96]);
		
		S_Box s4(out1[95:88], out2[95:88]);
		S_Box s5(out1[87:80], out2[87:80]);
		S_Box s6(out1[79:72], out2[79:72]);
		S_Box s7(out1[71:64], out2[71:64]);
		
		S_Box s8(out1[63:56], out2[63:56]);
		S_Box s9(out1[55:48], out2[55:48]);
		S_Box s10(out1[47:40], out2[47:40]);
		S_Box s11(out1[39:32], out2[39:32]);
	
		S_Box s12(out1[31:24], out2[31:24]);
		S_Box s13(out1[23:16], out2[23:16]);
		S_Box s14(out1[15:8], out2[15:8]);
		S_Box s15(out1[7:0], out2[7:0]);
	ShiftRows m3(clk, out2, out3);
	MixCol m4(clk, out3, out4);
		Key_schedule m5(clk, cipher_key, key_out1,Rcon1);
	Round_key m6(clk, out4, out5, key_out1);
	
//	S_Box m7(out5, out6);
		S_Box s16(out5[127:120], out6[127:120]);
		S_Box s17(out5[119:112], out6[119:112]);
		S_Box s18(out5[111:104], out6[111:104]);
		S_Box s19(out5[103:96], out6[103:96]);
		
		S_Box s20(out5[95:88], out6[95:88]);
		S_Box s21(out5[87:80], out6[87:80]);
		S_Box s22(out5[79:72], out6[79:72]);
		S_Box s23(out5[71:64], out6[71:64]);
		
		S_Box s24(out5[63:56], out6[63:56]);
		S_Box s25(out5[55:48], out6[55:48]);
		S_Box s26(out5[47:40], out6[47:40]);
		S_Box s27(out5[39:32], out6[39:32]);
		
		S_Box s28(out5[31:24], out6[31:24]);
		S_Box s29(out5[23:16], out6[23:16]);
		S_Box s30(out5[15:8], out6[15:8]);
		S_Box s31(out5[7:0], out6[7:0]);
	ShiftRows m8(clk, out6, out7);
	MixCol m9(clk, out7, out8);
		Key_schedule m10(clk, key_out1 ,key_out2,Rcon2);
	Round_key m11(clk, out8, out9, key_out2);
	
//	S_Box m12(out9, out10);
		S_Box s32(out9[127:120], out10[127:120]);
		S_Box s33(out9[119:112], out10[119:112]);
		S_Box s34(out9[111:104], out10[111:104]);
		S_Box s35(out9[103:96], out10[103:96]);
		
		S_Box s36(out9[95:88], out10[95:88]);
		S_Box s37(out9[87:80], out10[87:80]);
		S_Box s38(out9[79:72], out10[79:72]);
		S_Box s39(out9[71:64], out10[71:64]);
		
		S_Box s40(out9[63:56], out10[63:56]);
		S_Box s41(out9[55:48], out10[55:48]);
		S_Box s42(out9[47:40], out10[47:40]);
		S_Box s43(out9[39:32], out10[39:32]);
		
		S_Box s44(out9[31:24], out10[31:24]);
		S_Box s45(out9[23:16], out10[23:16]);
		S_Box s46(out9[15:8], out10[15:8]);
		S_Box s47(out9[7:0], out10[7:0]);	
	ShiftRows m13(clk, out10, out11);
	MixCol m14(clk, out11, out12);
		Key_schedule m15(clk, key_out2, key_out3,Rcon3);
	Round_key m16(clk, out12, out13, key_out3);
	
//	S_Box m17(out13, out14);
		S_Box s48(out13[127:120], out14[127:120]);
		S_Box s49(out13[119:112], out14[119:112]);
		S_Box s50(out13[111:104], out14[111:104]);
		S_Box s51(out13[103:96], out14[103:96]);
		
		S_Box s52(out13[95:88], out14[95:88]);
		S_Box s53(out13[87:80], out14[87:80]);
		S_Box s54(out13[79:72], out14[79:72]);
		S_Box s55(out13[71:64], out14[71:64]);
		
		S_Box s56(out13[63:56], out14[63:56]);
		S_Box s57(out13[55:48], out14[55:48]);
		S_Box s58(out13[47:40], out14[47:40]);
		S_Box s59(out13[39:32], out14[39:32]);
		
		S_Box s60(out13[31:24], out14[31:24]);
		S_Box s61(out13[23:16], out14[23:16]);
		S_Box s62(out13[15:8], out14[15:8]);
		S_Box s63(out13[7:0], out14[7:0]);	
	ShiftRows m18(clk, out14, out15);
	MixCol m19(clk, out15, out16);
		Key_schedule m20(clk, key_out3 ,key_out4,Rcon4);
	Round_key m21(clk, out16, out17, key_out4);
	
//	S_Box m22(out17, out18);
		S_Box s64(out17[127:120], out18[127:120]);
		S_Box s65(out17[119:112], out18[119:112]);
		S_Box s66(out17[111:104], out18[111:104]);
		S_Box s67(out17[103:96], out18[103:96]);
		
		S_Box s68(out17[95:88], out18[95:88]);
		S_Box s69(out17[87:80], out18[87:80]);
		S_Box s70(out17[79:72], out18[79:72]);
		S_Box s71(out17[71:64], out18[71:64]);
		
		S_Box s72(out17[63:56], out18[63:56]);
		S_Box s73(out17[55:48], out18[55:48]);
		S_Box s74(out17[47:40], out18[47:40]);
		S_Box s75(out17[39:32], out18[39:32]);
		
		S_Box s76(out17[31:24], out18[31:24]);
		S_Box s77(out17[23:16], out18[23:16]);
		S_Box s78(out17[15:8], out18[15:8]);
		S_Box s79(out17[7:0], out18[7:0]);	
	ShiftRows m23(clk, out18, out19);
	MixCol m24(clk, out19, out20);
		Key_schedule m25(clk, key_out4, key_out5,Rcon5);
	Round_key m26(clk, out20, out21, key_out5);
	
//	S_Box m27(out21, out22);
		S_Box s80(out21[127:120], out22[127:120]);
		S_Box s81(out21[119:112], out22[119:112]);
		S_Box s82(out21[111:104], out22[111:104]);
		S_Box s83(out21[103:96], out22[103:96]);
		
		S_Box s84(out21[95:88], out22[95:88]);
		S_Box s85(out21[87:80], out22[87:80]);
		S_Box s86(out21[79:72], out22[79:72]);
		S_Box s87(out21[71:64], out22[71:64]);
		
		S_Box s88(out21[63:56], out22[63:56]);
		S_Box s89(out21[55:48], out22[55:48]);
		S_Box s90(out21[47:40], out22[47:40]);
		S_Box s91(out21[39:32], out22[39:32]);
		
		S_Box s92(out21[31:24], out22[31:24]);
		S_Box s93(out21[23:16], out22[23:16]);
		S_Box s94(out21[15:8], out22[15:8]);
		S_Box s95(out21[7:0], out22[7:0]);	
	ShiftRows m28(clk, out22, out23);
	MixCol m29(clk, out23, out24);
		Key_schedule m30(clk, key_out5 ,key_out6,Rcon6);
	Round_key m31(clk, out24, out25, key_out6);
	
//	S_Box m32(out25, out26);
		S_Box s96(out25[127:120], out26[127:120]);
		S_Box s97(out25[119:112], out26[119:112]);
		S_Box s98(out25[111:104], out26[111:104]);
		S_Box s99(out25[103:96], out26[103:96]);
		
		S_Box s100(out25[95:88], out26[95:88]);
		S_Box s101(out25[87:80], out26[87:80]);
		S_Box s102(out25[79:72], out26[79:72]);
		S_Box s103(out25[71:64], out26[71:64]);
		
		S_Box s104(out25[63:56], out26[63:56]);
		S_Box s105(out25[55:48], out26[55:48]);
		S_Box s106(out25[47:40], out26[47:40]);
		S_Box s107(out25[39:32], out26[39:32]);
		
		S_Box s108(out25[31:24], out26[31:24]);
		S_Box s109(out25[23:16], out26[23:16]);
		S_Box s110(out25[15:8], out26[15:8]);
		S_Box s111(out25[7:0], out26[7:0]);	
	ShiftRows m33(clk, out26, out27);
	MixCol m34(clk, out27, out28);
		Key_schedule m35(clk, key_out6, key_out7,Rcon7);
	Round_key m36(clk, out28, out29, key_out7);
	
//	S_Box m37(out29, out30);
		S_Box s112(out29[127:120], out30[127:120]);
		S_Box s113(out29[119:112], out30[119:112]);
		S_Box s114(out29[111:104], out30[111:104]);
		S_Box s115(out29[103:96], out30[103:96]);
		
		S_Box s116(out29[95:88], out30[95:88]);
		S_Box s117(out29[87:80], out30[87:80]);
		S_Box s118(out29[79:72], out30[79:72]);
		S_Box s119(out29[71:64], out30[71:64]);
		
		S_Box s120(out29[63:56], out30[63:56]);
		S_Box s121(out29[55:48], out30[55:48]);
		S_Box s122(out29[47:40], out30[47:40]);
		S_Box s123(out29[39:32], out30[39:32]);
		
		S_Box s124(out29[31:24], out30[31:24]);
		S_Box s125(out29[23:16], out30[23:16]);
		S_Box s126(out29[15:8], out30[15:8]);
		S_Box s127(out29[7:0], out30[7:0]);	
	ShiftRows m38(clk, out30, out31);
	MixCol m39(clk, out31, out32);
		Key_schedule m40(clk, key_out7 ,key_out8,Rcon8);
	Round_key m41(clk, out32, out33, key_out8);
	
//	S_Box m42(out33, out34);
		S_Box s128(out33[127:120], out34[127:120]);
		S_Box s129(out33[119:112], out34[119:112]);
		S_Box s130(out33[111:104], out34[111:104]);
		S_Box s131(out33[103:96], out34[103:96]);
		
		S_Box s132(out33[95:88], out34[95:88]);
		S_Box s133(out33[87:80], out34[87:80]);
		S_Box s134(out33[79:72], out34[79:72]);
		S_Box s135(out33[71:64], out34[71:64]);
		
		S_Box s136(out33[63:56], out34[63:56]);
		S_Box s137(out33[55:48], out34[55:48]);
		S_Box s138(out33[47:40], out34[47:40]);
		S_Box s139(out33[39:32], out34[39:32]);
		
		S_Box s140(out33[31:24], out34[31:24]);
		S_Box s141(out33[23:16], out34[23:16]);
		S_Box s142(out33[15:8], out34[15:8]);
		S_Box s143(out33[7:0], out34[7:0]);	
	ShiftRows m43(clk, out34, out35);
	MixCol m44(clk, out35, out36);
		Key_schedule m45(clk, key_out8, key_out9,Rcon9);
	Round_key m46(clk, out36, out37, key_out9);
	
//	S_Box m47(out37, out38);
		S_Box s144(out37[127:120], out38[127:120]);
		S_Box s145(out37[119:112], out38[119:112]);
		S_Box s146(out37[111:104], out38[111:104]);
		S_Box s147(out37[103:96], out38[103:96]);
		
		S_Box s148(out37[95:88], out38[95:88]);
		S_Box s149(out37[87:80], out38[87:80]);
		S_Box s150(out37[79:72], out38[79:72]);
		S_Box s151(out37[71:64], out38[71:64]);
		
		S_Box s152(out37[63:56], out38[63:56]);
		S_Box s153(out37[55:48], out38[55:48]);
		S_Box s154(out37[47:40], out38[47:40]);
		S_Box s155(out37[39:32], out38[39:32]);
		
		S_Box s156(out37[31:24], out38[31:24]);
		S_Box s157(out37[23:16], out38[23:16]);
		S_Box s158(out37[15:8], out38[15:8]);
		S_Box s159(out37[7:0], out38[7:0]);	
	ShiftRows m48(clk, out38, out39);
		Key_schedule m49(clk, key_out9 ,key_out10,Rcon10);
	Round_key m50(clk, out39, out40, key_out10);
	
assign state_out = out40;
	
endmodule
