//exception handling
#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter x:";
    cin>>x;
    cout<<"Enter y:";
    cin>>y;
    cout<<"Enter z:";
    cin>>z;
    int p;  
      try{
        if((x-y)!=0){
          p=z/(x-y);
          cout<<"Result="<<p<<endl;
      }
      else{
        throw(x-y);
      }
      }
      catch(int r){
        cout<<"x-y="<<r<<endl;
      }
}