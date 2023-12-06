//NAME:M.BILAL MAQSOOD                              //Reg.No:2023398

//CS101 Assignment - 3                              //this code area of circle 

#include<iostream>
using namespace std;

float circlearea (int x) {

float circlearea = 3.14 * x * x;

    cout<<"area of the circle with radius = "<<x<<" is = "<<circlearea<<endl;
    
}
    
float spherevolume (int y) {

 float spherevolume = 4 / 3 * 3.14 * y * y * y;

cout<<"volume of sphere wih radius = "<<y<<" is = "<<spherevolume<<endl;
}

int main() {
    
    int x, y;
    
    cout<<"enter radius of circle to calculate area"<<endl;
    cin>>x;
    
    cout<<"enter radius of sphere to calculate volume"<<endl;
    cin>>y;
    
    circlearea(x);
    
    spherevolume(y);
    
    return 0;
}
