/*write a program with three classes Student,Test and Result by using multilevel inheritance.
Assume necessary data members and functions with input information,input data and calculate total
marks and display result*/
#include<iostream>
using std::cin;
using std::cout;

class STUDENT{
    protected:
    char name[20];
    int age;
    int level;
    public:
    void input(){
        cout<<"enter the name of the student\n";
        cin>>name;
        cout<<"enter the age of the student\n";
        cin>>age;
        cout<<"enter the class of the student\n";
        cin>>level;
    }
    void display(){
        cout<<"NAME: "<<name<<"\n";
        cout<<"AGE: "<<age<<"\n";
        cout<<"CLASS: "<<level<<"\n";
    }


};
class Test:public STUDENT{
        protected:
         int sub[6];
         int student_id;
         public:
         void input(){
            STUDENT::input();
             cout<<"enter the student id\n";
            cin>>student_id;
            cout<<"\nenter the marks of the student\n";
            int i;
             cout<<"sIZE OF SUB IS:"<<sizeof(sub)/sizeof(sub[0]);
            for(i=0;i<sizeof(sub)/sizeof(sub[0]);i++){
                cout<<"sub["<<i<<"] :";
                cin>>sub[i];
            }
         }
         void display(){
            STUDENT::display();
            int i;
            cout<<"student_id="<<student_id<<"\n";
            for(i=0;i<sizeof(sub)/sizeof(sub[0]);i++){
               cout<<"sub["<<i<<"]= "<<sub[i]<<"\n";
            }
         }
};
class Result:public Test{
    int total;
    int sum=0;
    public:
    void input(){
        Test::input();
    }
    void Total(){
        int i=0;
        for(i=0;i<sizeof(sub)/sizeof(sub[0]);i++){
              sum=sum+sub[i];
        }
    }
    void display(){
        Test::display();
        Total();
        cout<<"\nthe total marks is "<<sum<<"\n";
        // cout<<"\n the percentage is "<<(sum/((sizeof(sub)/sizeof(sub[0]))*100))*100<<"%\n";
    }
    

};
int main(){
     Result R1;
     R1.input();
     R1.display();
return 0;
}