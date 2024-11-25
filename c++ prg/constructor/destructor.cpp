// destructor : it frees the memory allocated by the object of the class.
#include<iostream>
using namespace std;
class Add_fun{
    public:
    int a,b;
    public:
    Add_fun(){
        cout<<"Enter values:";
        cin>>a>>b;
    }
    void display(){
        cout<<a<<"+"<<b<<"="<<a+b<<endl;
    }
    ~Add_fun(){
        cout<<"Destructor is called."<<endl;
    }
};
int main(){
  Add_fun af;
  af.display();
  cout<<"Calling destructor"<<endl;  
}