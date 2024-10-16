`timescale 1ns / 1ps
module Case4(
input A, B, C,D, E, output Y);
wire K, L, M;
assign K = A & B;
assign L = C ^ D;
assign M = ~(K & L);
assign Y = !(M |E);

endmodule
