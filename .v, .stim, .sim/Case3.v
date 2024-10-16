`timescale 1ns / 1ps
module Case3(
input A, B, C,D, E, F, output Y);
wire K, L, M,N;
assign K = A & B;
assign L = ~(C & D);
assign M = K|L;
assign N = E&F;
assign Y = ~(M&N);

endmodule
