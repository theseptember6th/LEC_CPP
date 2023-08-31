// File input outut with member function

#include<iostream>
#include<fstream>
using namespace std;

class student{
    char name[25];
    int roll;
    public:
    void input(){
        cout<<"\nenter name: ";
        cin>>name;
        cout<<"\n enter roll: ";
        cin>>roll;
    }
    void display(){
        cout<<"\nName: "<<name;
        cout<<"\nRoll: "<<roll;
    }
    void write2file(){
        ofstream outfile;
        outfile.open("kristal.dat",ios::binary);
        input();
        outfile.write(reinterpret_cast<char*>(this),sizeof(*this));
    }
    void readfromfile(){
        ifstream infile;
        infile.open("kristal.dat",ios::binary);
        while(infile.eof()){
            if(infile.read(reinterpret_cast<char*>(this),sizeof(*this))>0){
                display();
            }
        }
    }
    void readonerec(){
        int n;
        ifstream infile;
        infile.open("kristal.dat",ios::binary);
        infile.seekg(0,ios::end);
        int count = infile.tellg()/sizeof(*this);
        cout<<"\nthere are "<<count<<"records in this file";
        cout<<"\n enter the record number: ";
        cin>>n;
        infile.seekg((n-1))


    }
};

int main(){

return 0;
}