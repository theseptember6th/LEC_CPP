#include<iostream>
using std::cin;
using std::cout;

class grandparent{
     public:
     void showdata(){
        cout<<"hello";
     }

};
class parent1:virtual public grandparent{
     
};
class parent2:virtual public grandparent{
 
};
class child:public parent1,public parent2{
       public:
       void showchdata(){
        //showdata(); //ambigious
           showdata();
           parent1::showdata();
       }
};
int main(){
    child c1;
    c1.showdata();
    c1.showchdata();
return 0;
}