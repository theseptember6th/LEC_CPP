/* Define a class named Course. Derive three classes from this class named:Mathematics,Science,
and Engineering. then derive two classes from Science named physics and chemistry.Define data 
members and member functions as appropriate. illustrate the concept of member function overriding
and acessing overriden members from the derived class in your program*/

#include<iostream>
using std::cin;
using std::cout;

class Course{
    protected:
    char course[15];
    public:
    void input(){
        cout<<"enter your course\n";
        cin>>course;
    }
    void display(){
        cout<<"COURSE: "<<course;
    }
};
class Mathematics:public Course{
    
    
};
class Science:public Course{};
class Engineering:public Course{};
class Physics:public Science{};
class Chemistry:public Science{};
int main(){

return 0;
}