// abstraction 
#include<iostream>
using namespace std;
class Result{
    int a,b,c;
    public:
    void add(){
        cout<<"Enter a and b:";
        cin>>a>>b;
        c=a+b;
        cout<<"Result="<<c<<endl;
    }
};

int main(){
    Result res;
    res.add();
}