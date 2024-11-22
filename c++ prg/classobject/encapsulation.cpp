// Encapsulation :
#include<iostream>
using namespace std;
class Rectangle{
    private :
    int length,width;
    public:
    void set_data(int len,int wid){  // parameter function
        length=len;
        width=wid;
    }
    void get_data(){
        cout<<"Length="<<length<<"\n Width="<<width<<endl;
    }
};
int main(){
    Rectangle rect;
    rect.set_data(123,456);  
    rect.get_data();  
}