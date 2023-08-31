// random access to a file

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
};

void write2file(){
    student s1;
    ofstream outfile;
    outfile.open("kristal.dat",ios::binary);
    s1.input();
    outfile.write(reinterpret_cast<char*>(&s1),sizeof(s1));
}
void readfromfile(){
    student s1;
    ifstream infile;
    infile.open("kristal.dat",ios::binary);
    while(!infile.eof()){
        if(infile.read(reinterpret_cast<char*>(&s1),sizeof(s1))>0){
              s1.display();
        }
    }
}
void readonerec(){
    student s1;
    int n;
    ifstream infile;
    infile.open("kristal.dat",ios::binary);
    cout<<"enter record number\n";
    cin>>n;
    infile.seekg(n*sizeof(s1));
    infile.read(reinterpret_cast<char*>(&s1),sizeof(s1));
    s1.display();

}
int main(){

  int choice;
  cout<<"\n                STUDENT RECORD SYSTEM      ";
  cout<<"\n  ENTER 1---> TO WRITE RECORDS TO FILE   ";
  cout<<"\n  ENTER 2---> TO READ ALL RECORDS FROM FILE   ";
  cout<<"\n  ENTER 1---> TO READ 1 RECORD FROM FILE   ";
  cout<<"\n  ENTER 1---> TO EXIT   ";

return 0;
}