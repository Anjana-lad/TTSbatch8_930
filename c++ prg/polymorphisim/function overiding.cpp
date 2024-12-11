// function overiding:
#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"I am in class A"<<endl;
    }
};
class B:public A{
    public:
    void show(){
        cout<<"I am in class B"<<endl;
    }
};
int main(){
    A *ptr;  // pointer of class A
    B b;  // object of Class B
    ptr= &b;   // referencing pointer to object 
    ptr->show();  // calling function with pointer
    b.show();

}