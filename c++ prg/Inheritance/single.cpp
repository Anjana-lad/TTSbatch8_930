// single inheritance : the derived class is inherited by only one parent class.
// syntax for child class : class Childclassname : access-specifier parent-classname
// WAP for single inheritance having base class "vehicle" and derived class "car" the base class has data member color,max_speed and derived class have number of doors.  

#include<iostream>
using namespace std;
class Person{   // base class 
private:
    int pid;
    string name;
    public:
    void get_data(){  // mf
        cout<<"Enter id:";
        cin>>pid;
        cout<<"Enter name:";
        cin.ignore();
        getline(cin, name);
    }
    void display(){ //mf
        cout<<"Pid="<<pid<<"\n Name="<<name<<endl;
    }
};
class Employee :protected Person{  // child class
    public:
    double salary;
    string department;
    public:
    void get_info(){
        get_data();   // base class mf
        cout<<"Enter department:";
        cin>>department;
        cout<<"Enter salary:";
        cin>>salary;
    }
    void show(){
        display();  // base class mf
        cout<<"Department="<<department<<"\n Salary="<<salary<<endl;
    }
 } ;
int main(){
    Employee emp;
    emp.get_info();
    emp.show();   
}

//task:
// WAP for single inheritance having base class "vehicle" and derived class "car" the base class has data member color,max_speed and derived class have number of doors.