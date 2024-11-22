// constructor : it is same name as class name. it is special member function of the class.
#include<iostream>
using namespace std;
class Cube{
    int a;
    public:
    Cube(){   // constructor
         a=5;
         cout<<"Cube="<<a*a*a<<endl;
    }
};
int main(){
  Cube cb;  // object of class
}
