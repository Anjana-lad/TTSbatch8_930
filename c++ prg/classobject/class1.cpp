// class and object
#include<iostream>
using namespace std;
class Person{
    public:
    int pid;   // data members;
    string name;
    public:
    int getdata(){  // member function
        cout<<"Enter pid:";
        cin>>pid;
        cout<<"Enter name:";
        cin.ignore();
        getline(cin, name);
    }
    void display(){
        cout<<"Pid="<<pid<<endl;
        cout<<"Name="<<name<<endl;
    }
};
int main(){
  Person p1,p2; // p1 is my object;
  p1.getdata();
  p1.display();
  p2.getdata();
  p2.display();
}