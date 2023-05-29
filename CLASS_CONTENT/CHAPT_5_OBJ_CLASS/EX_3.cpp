// DEFINING FUNCTION INSIDE CLASS

#include<iostream>
using std::cin;
using std::cout;

class student{
     int roll;
     char name[20];
     char phone[10];

     public:
     void getdata(){
        cout<<"Enter the name of the student:\n";
        cin>>name;
        cout<<"Enter the roll number of the student:\n";
        cin>>roll;
        cout<<"Enter the phone number of the studnet:\n";
        cin>>phone;

     }

     void showdata()
     {
        cout<<"\nNAME: "<<name;
        cout<<"\nROLL: "<<roll;
        cout<<"\nPHONE NUMBER: "<<phone;

     }


};

int main()
{
    student s1,s2;
    s1.getdata();
    s2.getdata();
    cout<<"INFOS OF 1st STUDENT\n";
    s1.showdata();
    cout<<"\n\nINFOS OF 2ND STUDENT\n";
    s2.showdata();
    return 0;
}