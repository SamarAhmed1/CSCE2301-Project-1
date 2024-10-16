`timescale 1ns / 1ps
module Case2(
input A, B, C, D, output Y);
wire K, L, H;
assign K = A^B;
assign H = ~K;
assign L = ~(C|D);
assign Y = H&L;

endmodule
