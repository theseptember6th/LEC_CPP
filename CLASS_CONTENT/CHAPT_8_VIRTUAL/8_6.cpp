//PURE VIRTUAL FUNCTION

#include<iostream>
using std::cin;
using std::cout;

class human_beings{
     public:
     virtual void eye()=0;   //pure virtual function
     virtual void eye(int x,int y)=0; 
     void display(){
        cout<<"hello\n";
     }

};

class Shrestha:public human_beings{
    virtual void eye(){
        cout<<"We have two eyes\n";
    }
    virtual void eye(int x,int y){
        cout<<"we have "<<x<<"and"<<y<<"\n";
    }
};
int main(){
    //human_beings x; // you cant create class having pure virtual class function
    human_beings *ptr;
    Shrestha k1;
    
    ptr=&k1;
    ptr->display();
    ptr->eye();
    ptr->eye(2,3);

return 0;
}