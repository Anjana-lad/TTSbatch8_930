// multilevel inheritance: in this we have one derived class of one base class and that derived class is the base class for another derived class.
#include<iostream>
using namespace std;

class Employee{
    protected:
    int id;
    string name;
    public:
    int getdata(){
        cout<<"Enter id:";
        cin>>id;
        cout<<"Enter name:";
        cin.ignore();
        cin>>name; 
    }
    void show_emp(){
        cout<<"Employee id="<<id<<"\n Name="<<name<<endl;
    }
};
class Task:public Employee{
    protected:
    int t1,t2;
    public:
    int get_task(){
        getdata();
        cout<<"Task1=";
        cin>>t1;
        cout<<"Task2=";
        cin>>t2;
    }
    void show_task(){
        show_emp();
        cout<<"Task1="<<t1<<"\nTask2="<<t2<<endl;
    }
};
class Appraisal:public Task{
    protected:
    int total;
    public:
    int getdetails(){
        get_task();
        show_task();
        total=t1+t2;
        cout<<"Total task="<<total<<endl;
    }
    int grades(){
        if(total<100 && total>=80){
            cout<<"Grade =A"<<endl;
        }
        else if(total<80 && total >=50){
            cout<<"Grade=B"<<endl;
        }
        else{
            cout<<"Grade =C"<<endl;
        }
    }
};
int main(){
    Appraisal app;
    app.getdetails();
    app.grades();
}