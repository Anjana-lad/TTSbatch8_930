// multiple inheritance has one ambiguity problem that if both the base class has the same method name then.
#include<iostream>
using namespace std;
class A{
    public:
    int show(){
        cout<<"i am in class A"<<endl;
    }

};
class B{
    public:
    int show(){
        cout<<"I am i class B"<<endl;
    }
};
class C:public A,B{
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