// default constructor which have no parameter
#include<iostream>
using namespace std;
class Points{
    int singing, dance;
    public:
    Points(){  // constructor
        singing=50;
        dance=20;
    }
    void display(){   // mF
        cout<<"Singing="<<singing<<"\n DANCE="<<dance<<endl;
    }
};
int main(){
  Points p;
  p.display();  
}
