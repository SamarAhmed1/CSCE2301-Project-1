`timescale 1ns / 1ps
module Case1(
input A, B, C, D,
output Y);
wire K, L;

assign K = A & B;
assign L = C | B;
assign Y = ~(K & L);

endmodule
