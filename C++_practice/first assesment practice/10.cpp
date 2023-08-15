// type of inheritance 
/*               PERSON                                   //main parent class
   1 EMPLOYEE               2 STUDENT   // 1 and 2 represents hierarchical inheritance from PERSON      
            A MARKETING OFFICER  // A represents multiple inheritance from 1 and 2
                                 //A is the multilevel inheritance for PERSON


                                 the whole system is now hybrid inheritance
*/

#include<iostream>
using std::cin;
using std::cout;

class person{
    private:
    char name[20];
    public:
    void getdata(){
        cout<<"\nenter you name: ";
        cin>>name;
    }
    void showdata(){
        cout<<"\n name: "<<name;
    }
};

class employee:public person{
    private:
    int employeeid;
    public:
     void getdata(){
        person::getdata();
        cout<<"\nenter you employeeid: ";
        cin>>employeeid;
    }
    void showdata(){
        person::showdata();
        cout<<"\n employeeid: "<<employeeid;
    }
};

class student:public person{
    private:
    int studentid;
    public:
     void getdata(){
        person::getdata();
        cout<<"\nenter you employeeid: ";
        cin>>studentid;
    }
    void showdata(){
        person::showdata();
        cout<<"\n studentid: "<<studentid;
    }
};
class Result:public student{              
    private:
    int total_marks;
    public:
     void getdata(){
        student::getdata();
        cout<<"\nenter your marks: ";
        cin>>total_marks;
    }
    void showdata(){
        student::showdata();
        cout<<"\n Totalmarks: "<<total_marks;
    }
};

class marketing_officer:public employee,public student{
    private:
    int working_hour;
    public:
    void getdata(){
        student::getdata();
        employee::getdata();
        cout<<"\nenter your working hours";
        cin>>working_hour;
    }
    void showdata(){
        student::showdata();
        employee::showdata();
        cout<<"\n working hour: "<<working_hour;
    }
};

int main(){
     marketing_officer moff;
     cout<<"enter the data of the marketing officer\n";
     moff.getdata();
     cout<<"displaying the data of marketig officer\n";
     moff.showdata();
return 0;
}