// nested class : Class inside class
#include<iostream>
using namespace std;
class A{
    public:
    void show(){  // memberfunction
        cout<<"I am in class A"<<endl;
    }
    class B{  // inner class name
        public:
        void show(){  // member function
            cout<<"I am in class B";
        }
    };
};
int main(){
    A a;
    a.show();  // outer class 
    A :: B b;  // to create the object of inner class we use scope resolution operator.
    b.show();  // inner class
}