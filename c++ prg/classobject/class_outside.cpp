// to define the class member function outside the class ;
// data-type class name :: function name(){
//     // body of the function;
// }
#include<iostream>
using namespace std;
class employee{
    public:
    int eid;
    string name;
    float salary;
    public:
    void get_data();  // define 
    void display();
};
// to declare the function body outside the class.

void employee :: get_data(){
    cout<<"Enter Eid:";
    cin>>eid;
    cout<<"Enter name:";
    cin.ignore();
    getline(cin, name);
    cout<<"Enter Salary:";
    cin>>salary;
}

void employee :: display(){
    cout<<"Eid="<<eid<<"\n Name="<<name<<"\n Salary="<<salary<<endl;
}

int main(){
    employee emp;
    emp.get_data();
    emp.display();
} 