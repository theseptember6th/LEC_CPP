// GENERALLY FUNCTION INSIDE CLASS IS INLINE 
//WHILE  FUNCTION OUTSIDE THE CLASS ARENOT INLINE
// INLINE IS SIMILAR TO MACROS IN C i.e its increases the execution speed of the program.
// WE CAN MAKE INLINE BY PREFIX INLINE AT THE VERY BEGN OF FUCN DEFN.



#include<iostream>
using std::cin;
using std::cout;
#include<cstring>   // FOR USING STRING FEATURES


class student{
    int roll;
    char name[20];
    char phone[10];
     
    public:
    
    void getdata();
    void showdata();

};

inline void student::getdata()
{
    cout<<"enter the name of the student:\n";
    cin>>name;
    cout<<"enter the roll of the student:\n";
    cin>>roll;
    cout<<"enter the phone number of the student:\n";
    cin>>phone;

}

inline void student::showdata()
{
    cout<<"\nNAME: "<<name;
    cout<<"\nROLL: "<<roll;
    cout<<"\nNUMBER: "<<phone;
}

int main()
{
    student s1,s2;
    s1.getdata();
    s2.getdata();
    cout<<"INFOS OF THE 1ST STUDENT:\n";
    s1.showdata();
    cout<<"\n\nINFOS OF THE 2ND STUDENT:\n";
    s2.showdata();
    return 0;
}