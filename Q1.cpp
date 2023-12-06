//NAME:M.BILAL MAQSOOD                              //Reg.No:2023398

//CS101 Assignment - 3                              //this code claculates some mathematical expressions


#include<iostream>
using namespace std;

void calculateAndDisplay(int x, int y, int z) {
    const int a = 1;
    const int b = 2;
    const int c = 3;

    int A = a * x * x + b * y * y + c * z * z;
    int B = abs(A);
    double C = sqrt(x * y * z);
    double D = (A - B + A / B) / (C * C);

    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;
    cout << "D = " << D << endl;
}

int main() {
    int input_x = 4;
    int input_y = 5;
    int input_z = 6;

    calculateAndDisplay(input_x, input_y, input_z);

    return 0;
}
