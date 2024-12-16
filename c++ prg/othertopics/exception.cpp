//exception handling with try,catch and throw block
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter numbers:";
    cin>>a>>b>>c;
    try{
        if(c!=0){
            int res=(a+b)/c;
            cout<<"Result="<<res<<endl;
        }
        else{
            throw(c);
        }
    }
    catch(int r){
        cout<<"Number not divisible by"<<r<<endl;
    }
}