// Parameterized constructor : in this we will pass parameter to the constructor.
#include<iostream>
#define pi 3.14
using namespace std;
class Circle{
    int radius,area;
    public:
    Circle(int r){   // parameterized constructor
        radius=r;
    }
    void area_c(){  
        area=pi*radius*radius;
        cout<<"Area of circle="<<area<<endl;
    }
};
int main(){
    int a;
    cout<<"Enter a:";
    cin>>a;
    Circle cr1(a);
    cr1.area_c();
    Circle cr(4);  // Object
    cr.area_c();
}