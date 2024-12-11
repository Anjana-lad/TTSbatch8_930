// operator overloading: 
// overloading > (greater) symbol.
#include<iostream>
using namespace std;
class Overload{
    public:
    int num;
    public:
    Overload(){   // constructor
        cout<<"Enter number:";
        cin>>num;
    }
   int operator >(Overload &obj){
        if(num > obj.num){
            cout<<"greater values:"<<num<<endl;
        }
        else{
            cout<<"Greater value"<<obj.num<<endl;
        }
    }
    int operator ==(Overload &obj1){
        if(num==obj1.num){
            cout<<"Numbers are equal"<<endl;
        }
        else{
            cout<<"Number are not equal"<<endl;
        }
    }

    };
int main(){
    Overload ov1;
    Overload ov2;
    ov1>ov2;
    ov1==ov2;

}