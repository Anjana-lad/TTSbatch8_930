//dynamic memory allocation using new(),deallocation of memory using delete 
#include<iostream>
using namespace std;
int main(){
    int *ptr=NULL;
    ptr=new int;
    float *ptr1=new float (223.34);
    int *ptr3=new int[20];
    *ptr=35;
    cout<<"Value at ptr="<<*ptr<<endl;
    cout<<"value at ptr1="<<*ptr1<<endl;
    if(!ptr3){
        cout<<"Allocation of ptr3 not found."<<endl;
    }
    else{
        for(int i=0;i<20;i++){
            ptr3[i]=i+1;
        }
        cout<<"Value at array:";
        for(int i=0;i<20;i++){
            cout<<ptr3[i]<<" ";
        }
    }
    delete ptr;
    delete ptr1;
    delete []ptr3;
} 