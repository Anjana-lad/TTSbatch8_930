// hybrid inheritance : combination of more then one inheritance is called hybrid inheritance.
#include<iostream>
using namespace std;
class P{
   public: int p;
   public:
   void getp(){
    cout<<"Enter P:";
    cin>>p;
   }
};
class Q:public P{
    public:
    int q;
    public:
    void getq(){
        getp();
        cout<<"Enter Q:";
        cin>>q;
    }
};
class R{
    public:
    int r;
    public:
    void getr(){
        cout<<"Enter r:";
        cin>>r;
    }
};
class S :public Q,R{
    public:
    int total;
    public:
    void gets(){
        getq();
        getr();
        total=p+q+r;
    }
    void display(){
        cout<<"Total="<<total<<endl;
    }
};
int main(){
    S s;
    s.gets();
    s.display();
}