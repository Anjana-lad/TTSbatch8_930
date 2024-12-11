// Aggregation : This is the process in which one class defines the another class as an entity reference of it. this process of using the class in another class is called aggregation it is HAS-A relationship with another class.
#include<iostream>
using namespace std;
class Address{
  public:
    string city,state;
    public:
    Address(string ct,string st){
      this->city=ct;
      this->state=st;
    }
};
class Employee{
    private:
    Address *add;   // HAS-A relationship
    public:
    int id;
    string name;
    public:
    Employee(int eid,string nm,Address *add){
       this->id=eid;
        this->name=nm;
       this->add=add;
    }
    void display(){
        cout<<"Id="<<id<<endl;
        cout<<"Name="<<name<<endl;
        cout<<"City="<<add->city<<endl;
        cout<<"State="<<add->state<<endl;
    }
};
int main(){
    Address AD("Surat","Gujarat");
    Employee Emp(5,"Rohit",&AD);
    Emp.display();
}