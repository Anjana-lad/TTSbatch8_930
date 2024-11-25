// // copy constructor : It is making the same copy of the existing constructor.
// syntax:
// classname (const classname &objectname){
//     function body
// }
#include<iostream>
using namespace std;
class Values{
    public:
    int n1,n2;
    public:
    Values(int a,int b){   // parameterized constructor
        n1=a;
        n2=b;
    }
    Values (const Values &obj){  // copy constructor
        n1=obj.n1;
        n2=obj.n2;
    }
    void display(){
        cout<<"N1="<<n1<<"\n N2="<<n2<<endl;
    }
};
int main(){
    Values v1(15,82);
    Values v2=v1;
    v2.display();
}
/*Task1:
1.WAP in c++ using constructor to multiply 3 numbers.
2. WAP in c++ to read and display employee details using nested class;
3. WAP  in c++ to print fibonacci series using parameterized constructor.
4. WAP in c++ of constructor and destructor to get and display odd numbers.
5.use the concepts of constructor overloading to find out average of 2,3 and 4 numbers.
6. WAP to create mark-sheets of 5 students using constructor. 
*/
