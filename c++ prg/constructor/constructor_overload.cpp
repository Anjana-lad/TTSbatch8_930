// constructor overloading : means to have more then one constructor in the program.
#include<iostream>
using namespace std;

class Rectangle{
    int length,width,area;
    public:
    Rectangle();
    Rectangle(int len,int wid);
    int Area(){
      return length*width;
      
    }
};
Rectangle :: Rectangle(){
    cout<<"Enter length and width:";
    cin>>length>>width;
}
Rectangle :: Rectangle(int len,int wid){
    length=len;
    width=wid;
}

int main(){
    Rectangle rect1;
   cout<<"Area of default constructor="<<rect1.Area()<<endl;
    Rectangle r2(15,8);
    cout<<"Area of parameterized constructor ="<<r2.Area();
}