// friend function : it is used to accesss the private data member outside the class  .
#include<iostream>
using namespace std;
class Rohit;  // decalre
class Abhi{
    private:
    int a_money=2000;
   friend int Deep(Abhi,Rohit);
};
class Rohit{
    private:
    int r_money=5000;
    friend int Deep(Abhi,Rohit);
};

// create friend function body 
int Deep(Abhi a, Rohit r){
    int total= a.a_money+r.r_money;
    cout<<"Total money="<<total<<endl;
}
int main(){
   Abhi ah;
   Rohit rh;
   Deep(ah,rh); 
} 
// task for inheritance:

// 1.WAP to read and print employee information using multiple inheritance.
// 2.WAP having class name fruit with datamember to calculate number of fruits in a basket.create 2 other classes apple and mango to calculate number of apples and mango in a basket. print the number of each type and total number of fruit in a basket.
// 3. WAP for student class and teacher to collect information of student and teacher when your required.
// 4. WAP to read and print employee information with department and function using hierarchical inheritance.