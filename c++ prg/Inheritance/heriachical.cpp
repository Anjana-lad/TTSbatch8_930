// heriarichical inheritance : in this we have one base class and multiple child class of it.
#include<iostream>
using namespace std;
class Fruit{
     public:
     void show_f(){
        cout<< "I am fruit class"<<endl;
     }
};
class Apple:public Fruit{
    public:
    void a(){
        show_f();
        cout<<"I am in apple class"<<endl;
    }
};
class Grapes : public Fruit{
    public:
    void g(){
        show_f();
        cout<<"I am in Grapes class"<<endl;
    }
};
int main(){
    Apple app;
    Grapes gra;
    app.a();
    gra.g();
}
