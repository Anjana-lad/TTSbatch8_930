//  <iomanip.h> 
// 1. setw(int value) : set width;
// 2. setprecision() : set for float value.
// 3. setfill(char ch) :   

#include<iostream>
#include<iomanip>  //  header file for maniplation function
using namespace std;
int main(){
    int length,width;
    cout<<"Enter length:";
    cin>>length>>width;
    // setw() / to set width.
    cout<<"Length="<<setw(7)<<length<<endl;
    cout<<"Width ="<<setw(7)<<width<<endl;

    // set precision function with float value;
double num=14357.325687; 
    cout<<"num="<<setprecision(9)<<num<<endl;
    cout<<fixed;
    cout<<"num="<<setprecision(9)<<num<<endl;

    // set fill() function

    cout<<"length="<<setw(10)<<setfill('x')<<length<<endl;
}