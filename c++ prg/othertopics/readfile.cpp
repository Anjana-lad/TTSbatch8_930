// reading an external file data on console.
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string str;
    ifstream fin;
    fin.open("G:\\TTSbatch8_930(dmbrkp)\\c++ prg\\theory\\class.txt");
    
while(!fin.eof()){
   getline(fin,str);
   cout<<str<<endl;
}    
    fin.close();
   // cout<<"File data shown"<<endl;
}