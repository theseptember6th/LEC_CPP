#include<iostream>
using std::cin;
using std::cout;

class student{
    protected:
     int studID;
     char name[25];
   public:
      void getsdata(){
        cout<<"\n Enter student ID:";
        cin>>studID;
        cout<<"\n Enter name: ";
        cin>>name;
      }
      void showdata(){
        cout<<"\n Student ID:"<<studID;
        cout<<"\n NAME: "<<name;
      }
};
class InternalExam: virtual public student{
    protected:
      int marks1,marks2,marks3;
    public:
     void getdata(){
        cout<<"Enter the Internal marks in three subjects: ";
        cin>>marks1>>marks2>>marks3;
     }
     void showdata(){
        cout<<"\n Internal marks in Subject 1: "<<marks1;
        cout<<"\n Internal marks in Subject 2: "<<marks2;
        cout<<"\n Internal marks in Subject 3: "<<marks3;
     }
     int totInternalMarks(){
        return (marks1+marks2+marks3);
     }

};
class ExternalExam:virtual public student{
     protected:
      int marks1,marks2,marks3;
      public:
      void getdata(){
        cout<<"Enter External marks in three subjects: ";
        cin>>marks1>>marks2>>marks3;
      }
      void showdata(){
        cout<<"\n External marks in subject 1:"<<marks1;
        cout<<"\n External marks in subject 2:"<<marks2;
        cout<<"\n External marks in subject 3:"<<marks3;
      }
      int totExternalMarks(){
        return (marks1+marks2+marks3);
     }
};
class result:public InternalExam,public ExternalExam{
    public:
    void getdata(){
        InternalExam::getdata();
        ExternalExam::getdata();
    }
    void showdata(){
        InternalExam::showdata();
        ExternalExam::showdata();
    }
    int TotalMarks(){
        return(totExternalMarks()+totInternalMarks());
    }
};
int main(){
  result r;
  cout<<"Enter the data for student\n";
  r.getsdata();
  cout<<"\n Enter marks";
  r.getdata();
  cout<<"\n Data for the student is:\n";
  r.showdata();
  cout<<"\n Total Marks= "<<r.TotalMarks();
return 0;
}