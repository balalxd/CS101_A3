//NAME:M.BILAL MAQSOOD                              //Reg.No:2023398

//CS101 Assignment - 3                              //this code finds GCD and LCM

#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findLCM(int a, int b) {
    int lcm = 1;
    for (int i = 1; i <= a * b; ++i) {
        // Check if i is a common multiple
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }
    return lcm;
}

int main() {
    int num1, num2;
 
    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    int gcd = findGCD(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;

    int lcm = findLCM(num1, num2);
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0;
}
