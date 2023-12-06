//NAME:M.BILAL MAQSOOD                              //Reg.No:2023398

//CS101 Assignment - 3                              //this code converts temp from celcius to Fahrenheit and vice versa 


#include <iostream>
#include <iomanip>
using namespace std;

int celsius(int fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int fahrenheit(int celsius) {
    return celsius * 9.0 / 5.0 + 32.0;
}

int main() {
    cout << setw(15) << "Celsius" << setw(15) << "Fahrenheit" << endl;
    
    for (int celsius1 = -100; celsius1 <= 100; celsius1 += 10) {
        double fahrenheit1 = fahrenheit(celsius1);
        cout << setw(10) << celsius1 << setw(10) <<   fahrenheit1 << endl;
    }

    cout << endl << setw(15) << "Fahrenheit" << setw(15) << "Celsius" << endl;
    
    for (int fahrenheit1 = 0; fahrenheit1 <= 200; fahrenheit1 += 10) {
        double celsius1 = celsius(fahrenheit1);
        cout << setw(10) << fahrenheit1 << setw(10)  << celsius1 << endl;
    }

    return 0;
}
