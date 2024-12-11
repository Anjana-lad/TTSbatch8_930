// multiple inheritance : there will be two base class and one derived class of this base class.
#include<iostream>
using namespace std;
class Mom{
    protected:
        int m_money;
    public:
    Mom(){
        cout<<"Enter mom money:";
        cin>>m_money;
    }
    void show_m(){
        cout<<"Mom Money="<<m_money<<endl;
    }
};
class Dad{
    protected:
        int d_money;
    public:
    Dad(){
        cout<<"Enter Dad money:";
        cin>>d_money;
    }    
    void show_d(){
        cout<<"Dad Money="<<d_money<<endl;
    }
};
class child :public Mom,Dad{
    protected:
    int total_m;
    public:
    child(){   // constructor
    show_m();  // base class method
    show_d();  // base class method
    }
    void total(){
        total_m=m_money+d_money;
        cout<<"Total money="<<total_m<<endl;
    }
};
int main(){
    child ch;
    ch.total();
}