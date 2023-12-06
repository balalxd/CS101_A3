//NAME:M.BILAL MAQSOOD                              //Reg.No:2023398

//CS101 Assignment - 3                              //this code finds odd and even


#include <iostream>
using namespace std;

int result, odd, even;

bool isOdd(int integer) {
    return integer % 2 != 0;
}

int main() {
    int integer;
    char choice;

    do {
        cout << "Enter an integer: ";
        std::cin >> integer;

        
        cout << integer << " is " << (isOdd(integer) ? "odd." : "even.") << endl;

        cout << "Do you want to check another integer? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
