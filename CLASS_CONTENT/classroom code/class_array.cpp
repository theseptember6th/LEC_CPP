#include<iostream>
using std::cin;
using std::cout;

class student{
    char name[20];
    int roll;
    char address[10];

    public:
    void getdata(){

        cout<<"\nenter your name,roll and address ";
        cin>>name>>roll>>address;
    }
    void display(){
        cout<<"\nNAME: "<<name;
        cout<<"\nROLL: "<<roll;
        cout<<"\nAddress: "<<address;
    }
};
//student *s1= new student s[];
int main(){
    int n;
    cout<<"\nenter total number of students";
    cin>>n;
    class student s[n];
    for(int i=0;i<n;i++){
        s[i].getdata();
    }
    for(int i=0;i<n;i++){
        s[i].display();
    }
}