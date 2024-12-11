// function overloading : function name are same but no. of parameter are different.or different types of parameter.
#include<iostream>
using namespace std;
int add_fun(int a,int b){
    return a+b;
}
int add_fun(int a,int b,int c){
    return a+b+c;
}
int add_fun(double a ,double b){
    return a+b;
}

int main(){
    cout<<"Integer function with 2 values:"<<add_fun(10,20)<<endl;
    cout<<"With 3 values :"<<add_fun(10,20,30)<<endl;
    cout<<"Double values:"<<add_fun(10.32,52.12)<<endl;
}