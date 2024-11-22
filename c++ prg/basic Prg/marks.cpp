// enter student details take roll_no,name,marks of eng,sci,maths,comp find total of marks scored and find percentage according to it allocate grade according to percentage.

#include<iostream>
using namespace std;
int main(){
    int rollno;
    string name;
    float total,percent,english,science,maths,computer;
    cout<<"Enter rollno:";
    cin>> rollno;
    cout<<"Enter name:";
    cin>>name;
    cout<<"English :";
    cin>>english;
    cout<<"Maths:";
    cin>>maths;
    cout<<"Science:";
    cin>>science;
    cout<<"Computer :";
    cin>>computer;
    total=english+maths+science+computer;
    cout<<"Total ="<<total<<endl;
    percent=(total*100)/400;
    cout<<"Percentage="<<percent<<endl;

    if(percent >80  && percent <=100){
        cout<<"grade= A"<<endl;
    }
    else if(percent >50 && percent <=80){
        cout<<"Grade= B"<<endl;
    }
    else if(percent >35 && percent <=50){
        cout<<"Grade= C"<<endl;
    }
    else{
        cout<<"Fail";
    }
}