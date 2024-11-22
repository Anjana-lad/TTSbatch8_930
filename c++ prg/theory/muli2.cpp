//multiple inheritance with ambiguity
#include<iostream>
using namespace std;
class A{
    public:
    int show(){
        cout<<"I am in class A"<<endl;
    }
};
class B{
    public:
    int show(){
        cout<<"I am in class B"<<endl;
    }
};
class C: public A, public B{
    public:
    int show(){
        A::show();
        B::show();
        cout<<"I am in class C"<<endl;
    }
};
int main(){
    C c;
    c.show();
}