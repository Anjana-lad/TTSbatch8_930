// template:
// function template
#include<iostream>
using namespace std;
template <typename t>
t add_fun(t a,t b){
    return a+b;
}
int main(){
    cout<<add_fun<int>(10,30)<<endl;
    cout<<add_fun<double>(50.32,47.63)<<endl;
    cout<<add_fun<string>("hello","world");
}