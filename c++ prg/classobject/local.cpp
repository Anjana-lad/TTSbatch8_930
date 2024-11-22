// local class : the class is written inside the main function.
#include<iostream>
using namespace std;
int main(){
    class student{
        private:
        int roll_no;
        string name;
        public:
        int getvalue(){
            cout<<"Enter roll_no:";
            cin>>roll_no;
            cout<<"Enter name:";
            cin.ignore();
            getline(cin, name);
        }
        void display(){
            cout<<"Roll_no="<<roll_no<<"\n Name="<<name<<endl;
        }
    };
    student  obj;
    obj.getvalue();
    obj.display();
}