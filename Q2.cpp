//NAME:M.BILAL MAQSOOD                              //Reg.No:2023398

//CS101 Assignment - 3                              //this code calculates time in seconds

#include<iostream>
using namespace std;

float timeinsecond(int hour, int minute, int second, int millisecond) {
    
float timeinsecond = hour * 3600 + minute * 60 + second + millisecond / 100;
    
    cout<<"time in second is equal to = "<<timeinsecond<<endl;
    
}

int main() {
    int hour, minute, second, millisecond;
    
    cout<<"enter time in hour"<<endl;
    cin>>hour;
    
    cout<<"enter time in minute"<<endl;
    cin>>minute;
    
    cout<<"enter time in second"<<endl;
    cin>>second;
    
    cout<<"enter time in millisecond"<<endl;
    cin>>millisecond;
    
    timeinsecond(hour, minute, second, millisecond);
    
    return 0;
}
