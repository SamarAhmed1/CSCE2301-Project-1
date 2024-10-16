`timescale 1ns / 1ps

module Case5(
input A, B, C, D, E, F, G,
output Y);
  wire K, L, M, N, O, P, Q;
  
  assign K = A ^ B;
  assign L = ~(C & D);
  assign M = ~(E | F);
  assign N = G | M;
  assign P = ~N;
  assign O = K & L;
  assign Y = O ^ P;

endmodule
