// use of scope resolution operator. (::)
#include<iostream>
using namespace std;
int p=20;   // global variable
int main(){
    int p=10;  // local variable;
    int q=20;
    cout<<"the value of p="<<p<<endl;
    cout<<"P+q="<<p+q<<endl;
    cout<<"To add global variable="<<p+::p+q<<endl;
    cout<<"::p="<<::p<<endl;
}
