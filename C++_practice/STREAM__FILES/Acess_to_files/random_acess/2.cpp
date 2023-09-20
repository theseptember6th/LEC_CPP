// the ultimate 


#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>
using namespace std;


class student{
    char name[50];
    int roll;
    float marks;

    public:
    void input(){
        cout<<"\nenter name: ";
        cin>>name;
        cout<<"\n enter roll: ";
        cin>>roll;
        cout<<"\n enter marks: ";
        cin>>marks;
    }
    void display(){
       cout<<"\n"<<setw(10)<<name<<setw(5)<<roll<<setw(5)<<setprecision(3)<<marks<<"\n";
    }
    int getroll(){
        return roll;
    }
    void write2file();
    void readfromfile();
    void read1rec();
     void add();
    void search();
    void modify();
    void delet();

};

void student::write2file(){
    student s;
    fstream file;
    file.open("kristal.txt",ios::out);
    cout<<"\nenter the number of records to be written to file";
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        s.input();
        file.write((char*)&s,sizeof(s));
    }
    file.close();

}
void student::readfromfile(){
    student s;
    fstream file;
    file.open("kristal.txt",ios::in);
    if(file.fail()){
        cout<<"\nerror opening the file";
        exit(1);
    }
    cout<<"INFORMATION ON FILE\n";
    cout<<setw(10)<<"Name"<<setw(5)<<"roll"<<setw(5)<<setprecision(3)<<"marks";
    while(file.read((char*)&s,sizeof(s))){
        s.display();
    }
    file.close();
}
void student::read1rec(){
    student s;
    fstream file;
    file.open("kristal.txt",ios::in);
    if(file.fail()){
        cout<<"\nerror opening the file";
        exit(1);
    }
    file.seekg(0,ios::end);
    int total_size=file.tellg();
    int total_records=total_size/sizeof(s);
    cout<<"\nthere are "<<total_records<<" no of records";
    cout<<"\n choose record to be read\n";
    int n;
    cin>>n;
    file.seekg(0,ios::beg);
    file.seekg((n-1)*sizeof(s));
    file.read((char*)&s,sizeof(s));
    cout<<"\n record you want to get displayed";
    s.display();
    file.close();
}

void student::add(){
    fstream file;
    student s;
    file.open("kristal.txt",ios::app);
    s.input();
    file.write((char*)&s,sizeof(s));
    file.close();
}

void student::search(){
    fstream file;
    file.open("kristal.txt",ios::in);
    if(file.fail()){
        cout<<"\n error opening the file";
        exit(1);
    }
    student s;
    int found=0;
    cout<<"\nenter the roll of the student you want to search ";
   int rollno;
   cin>>rollno;
    while(file.read((char*)&s,sizeof(s))){
         if(s.getroll()==rollno){
                    found=1;
                    s.display();  
                    break; 
         }
    }
    if(found==0){
        cout<<"\nrecord not found";
    }
    file.close();
}
void student::modify(){//modify==replace an object with another object
    
    fstream file;
    student s;
    file.open("kristal.txt",ios::out|ios::in|ios::ate);
     if(file.fail()){
        cout<<"\n error opening the file";
        exit(1);
    }
    file.seekg(0,ios::beg);
    cout<<"\nenter the record you want to modify: ";
    int n;
    cin>>n;
    file.seekg((n-1)*sizeof(s),ios::beg);
    file.read((char*)&s,sizeof(s));
    s.input();
   file.write((char*)&s,sizeof(s));
    file.close();
}
void student::delet(){
    fstream file;
    file.open("kristal.txt",ios::in);
    cout<<"\nenter the roll of student that you want to delete";
    int rollno;
    cin>>rollno;
    student s[48];
    int i=0;
    file.seekg(0,ios::beg);
    while(file.read((char*)&s[i],sizeof(s))){
        i++;
    }
    file.close();
    file.open("kristal.txt",ios::out|ios::trunc);
    int count=i;
    for(i=0;i<count;i++){
        if(s[i].getroll()!=rollno){
            file.write((char*)&s[i],sizeof(s[i]));
        }
    }
   file.close();
}

int main(){
    student s;
    while(true){
        int choice;
       

        cout<<"\n PRESS 1 to write records to file ";
        cout<<"\n PRESS 2 to read records from file ";
        cout<<"\n PRESS 3 to read specific record from file ";
        cout<<"\n PRESS 4 to add record to file ";
        cout<<"\n PRESS 5 to search record  from file ";
        cout<<"\n PRESS 6 to modify record from the file ";
        cout<<"\n PRESS 7 to delete record from file ";
        cout<<"\n PRESS 8 to exit ";

         cout<<"\n enter choice\n";
         cin>>choice;

        switch(choice){
            case 1:
            s.write2file();
            break;
            case 2:
            s.readfromfile();
            break;
            case 3:
            s.read1rec();
            break;
            case 4:
            s.add();
            break;
            case 5:
            s.search();
            break;
            case 6:
            s.modify();
            break;
            case 7:
            s.delet();
            break;
            case 8:
            exit(1);
            default:
            exit(1);

        }
    }
 }
