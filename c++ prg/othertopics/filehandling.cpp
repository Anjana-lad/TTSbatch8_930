// file handling to write the data to the file using program
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int id;
    string name;
    float percent;
    ofstream fout;

    cout<<"Enter id:";
    cin>>id;
    cout<<"Enter name:";
    cin.ignore();
    getline(cin, name);
    cout<<"Enter percent:";
    cin>>percent;

    fout.open("G:\\TTSbatch8_930(dmbrkp)\\c++ prg\\othertopics\\file.txt");
    fout<<"id:"<<id<<endl<<"Name:"<<name<<endl<<"percent:"<<percent;

cout<<"Data entered successfully."<<endl;
    fout.close();
}