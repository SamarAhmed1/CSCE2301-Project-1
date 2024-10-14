// CSCE2301-Test Circuits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool Circuitcase2(int A, int B, int C, int D) {
    bool K, L, H, Y;
    K = A ^ B;
    H = !K;
    L = !(C || D);
    Y = H && L;

    return Y;
    
}

bool Circuitcase4(int A, int B, int C, int D, int E) {
    bool K, L, H, M, Y;
    K = A & B;
    L = C ^ D;
    M = !(K && L);
    H = E;
    Y = !(M || H);
   
    return Y;
}

//Driver
int main()
{
    int A = 1, B = 0, C = 0, D = 1, E;
    bool out1 = Circuitcase2(A, B, C, D);
    cout << "Case 1: " << endl;
    if (out1) {
        cout << "The output is true " << endl;
    }
    else {
        cout << "It is not true" << endl;
    }
    cout << "Case 2: " << endl;
    A = 1, B = 1, C = 1, D = 0, E = 0;

    bool out2 = Circuitcase4(A, B, C, D, E);
    if (out2) {
        cout << "The output is true " << endl;
    }
    else {
        cout << "It is not true" << endl;
    }
}