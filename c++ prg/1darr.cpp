// 1 dimensional array to take input from user.
#include<iostream>
using namespace std;
int main(){
    int arr[5],i,max=0,min;
    cout<<"Enter array elements:";
    for(i=0;i<5;i++){
        cin>>arr[i];
    }

    cout<<"Printing array elements:"<<endl;
    for(i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
 
    for(i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Maximum="<<max<<endl;
    cout<<"Minimum="<<min<<endl;


}