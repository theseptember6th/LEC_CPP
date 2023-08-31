//sequential acess

#include<iostream>
#include<fstream>
using namespace std;

class student{
     char name[20];
     int roll;
     public:
     void input(){
        cout<<"\n enter name: ";
        cin>>name;
        cout<<"\n enter roll: ";
        cin>>roll;
     }
     void display(){
        cout<<"\nName : "<<name;
        cout<<"\n Roll: "<<roll;

     }

};
void write2file(){
    student s1;
    ofstream outfile;
    outfile.open("Kristal.dat",ios::binary|ios::app);
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
int main(){
      int choice;
      cout<<"    STUDENT RECORD SYSTEM   ";
      cout<<"\n select one option below ";
      cout<<"\n enter 1 --> Write records to file";
      cout<<"\n enter 2 --> Read records from file";
      cout<<"\n enter 3 --> exit from program";


      while(true){
        cout<<"\n enter your choice";
        cin>>choice;
        

        switch(choice){
            case 1:
              write2file();
              break;

            case 2:
            readfromfile();
            break;

            case 3:
            exit(0);
           
            default:
            cout<<"\n choice not available";
            exit(0);
        }
      }
      
      


return 0;
}