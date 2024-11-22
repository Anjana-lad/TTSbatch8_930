// function that takes some input do computation and generates output according to it.
// function to print fibonacci series 
#include<iostream>
using namespace std;
int fibonacci(int num){
    int n1=0,n2=1,temp,count;
    cout<<n1<<","<<n2<<",";
    count=2;
    while(count<num){
        temp=n1+n2;
        n1=n2;
        n2=temp;
    count++;
    cout<<temp<<",";
    }
}
int main(){
    int num;
    cout<<"Enter number :";
    cin>>num;
    fibonacci(num);  // calling function
}