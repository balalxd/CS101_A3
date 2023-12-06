//NAME:M.BILAL MAQSOOD                              //Reg.No:2023398

//CS101 Assignment - 3                              //this code finds perfect numbers

#include <iostream>
using namespace std;

int Perfectnum(int number) {
    int sum = 1;

    for(int i = 2; i <= number / 2; ++i) {
        if(number % i == 0) {
            sum += i;
        }
    }

    return (sum == number);
}

int main() {
    
    cout << "Perfect numbers between 1 and 1000:" << endl<<endl;

    for (int i = 2; i <= 1000; ++i) {
        if (Perfectnum(i)) {
            cout << i << " is a perfect number. Factor of this number are 1 "<<endl;

            for (int j = 2; j <= i / 2; ++j) {
                if (i % j == 0) {
                    cout << " + " << j;
                }
            }

         cout << endl<<endl;
        }
    }

    return 0;
}
