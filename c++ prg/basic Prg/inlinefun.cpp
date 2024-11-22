// inline function : in this inline keyword is used.
#include<iostream>
using namespace std;
inline int cube(int num){
    
    return num*num*num;
}
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    cout<<"num1="<<cube(num)<<endl;
    cout<<"cube of 6="<<cube(6)<<endl;
}