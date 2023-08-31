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
        infile.seekg((n-1)*sizeof(*this));
        infile.read(reinterpret_cast<char*>(this),sizeof(*this));
        display();
    }
};

int main(){
   student s1;
   int choice;
   cout<<"\n       STUDENT RECORD SYSTEM         ";
   cout<<"\n Enter 1 ---->to write to the file   ";
   cout<<"\n Enter 2 ---->to read from the file   ";
   cout<<"\n Enter 1 ---->to read specific record   ";
   cout<<"\n Enter 1 ---->to exit the program  ";


   while(true){
      cout<<"\n enter the choice";
      cin>>choice;

      switch(choice){
        case 1:
          s1.write2file();
          break;

         case 2:
         s1.readfromfile();
         break;

         case 3:
         s1.readonerec();
         break;

         case 4:
         exit(0);


         default:
         cout<<"invalid digit\n";
         exit(0) 
      }
   }
return 0;
}