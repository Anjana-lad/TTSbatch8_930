// loops
//1. factorial prg
// #include<iostream>
// using namespace std;
// int main(){
//     int num,fact=1;
//     cout<<"Enter number:";
//     cin>>num;
//     for(int i=1;i<=num;i++){
//         fact=fact*i;
//     }
//     cout<<"Factorial of given number="<<fact<<endl;
// }

// reverse number

// #include<iostream>
// using namespace std;
// int main(){
//     int num,rev=0,rem;
//     cout<<"Enter number:";
//     cin>>num;
//     while(num>0){
//         rem=num%10;
//         rev=rev*10+rem;
//         num/=10;
//     }
//     cout<<"Reverse number="<<rev<<endl;

// }
// patterns 1:
// *****
// *
// *
// *
// *****

#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++){
            if(row==1 || row==5 || col==1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}