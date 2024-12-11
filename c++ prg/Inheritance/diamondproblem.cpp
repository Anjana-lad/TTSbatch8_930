// diamond problem : combination of multiple and multilevel inheritance.
#include<iostream>
using namespace std;
class Grandparent{
    public:
    int gp;
    public:
    void getgp(){
        cout<<"Enter gp:";
        cin>>gp;
    }
};
class Parent1: virtual public Grandparent{
    public:
    int p1;
    public:
    void getp1(){
      // getgp();
        cout<<"Enter getp1:";
        cin>>p1;
    }
};
class Parent2: virtual public Grandparent{
    public:
    int p2;
    public:
    void getp2(){
       // getgp();
        cout<<"Enter getp2:";
        cin>>p2;
    }
};
class child :public Parent1,Parent2{
    public:
    int ch;
    public:
    void getdata(){
        getgp();
        getp1();
        getp2();
        ch=gp+p1+p2;
        cout<<"Total ="<<ch<<endl;
    }
};
int main(){
    child c;
    c.getdata();
}