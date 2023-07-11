#include<iostream>
using std::cin;
using std::cout;

class parent{
    
    public:
    parent(){
        cout<<"\n PARENT CONSTRUCTOR";
    }
    // parent(int x){
    //     cout<<"\n the value is \n";<<x;
    // }
    ~parent(){
        cout<<"\n PARENT DESTRUCTOR";
    }
};
class child:public parent{
    public:
    child(){
        cout<<"\n CHILD CONSTRUCTOR";
    }
    ~child(){
        cout<<"\n CHILD DESTRUCTOR";
    }
};
int main(){
    parent p1;
    child c3;
    //child c2(10);// constructor is class specific 
   // child c1;



return 0;
}