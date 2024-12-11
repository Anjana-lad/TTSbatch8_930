// pure virtual function : it is afunction having no body part and is assign to zero.and the class having this pure virtual function is called abstract class. and then this class should be inherit in its child class.
#include<iostream>
using namespace std;
class Shape{
    public:
    virtual int cal_area()=0;  // pure virtual function
};  // Abstract class.
class Rectangle:public Shape{
    protected:
    int l,w;
    public:
    Rectangle(int len,int wid){
        l=len;
        w=wid;
    }
    int cal_area(){
        cout<<"Area of rectangle="<<l*w<<endl;
    }
};
class Circle:public Shape{
    protected:
    float radius,pi=3.14;
    public:
    Circle(){
        cout<<"Enter radius:";
        cin>>radius;
    }
    int cal_area(){
        cout<<"Area of circle="<<pi*radius*radius<<endl;
    }
};
int main(){
    Rectangle rect(10,50);
    rect.cal_area();
    Circle cr;
    cr.cal_area();
}