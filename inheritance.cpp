#include <iostream>
using namespace std;
class Account{
    public:
    float salary =6000;
      Account(){                             //This method can be accessed without calling
        cout<<"this is account"<<"\n";
        // cout<<x+y<<"\n";
    }
    Account(int x,int y ,int z){
        cout<<x+y+z;
    }
    
    void display()
    {
        cout<<"susil is handsome man";
    }
    float simpleInterest(float x,float y, float z)
    {
        return (x*y*z)/100;
    }
    float simpleInterest(float x,float y,float z, float w)
    {
        return (x*y*z*w)/1000;
    }
};   //BASE CLASS

// class Programmer: public Account{ //class Programmer extends Animal
//     public:
//     float bonus =5000;

// }; //Derived class

int main(){
//     Programmer p1;
    Account a2();
    Account a3(1,2,3);
    
   float interest2= a3.simpleInterest(2,3,4);
    float interest1=a3.simpleInterest(2,3,4,5);
    // float interest3=a2.simpleInterest(1,0,0);
    // cout<<interest1<<"\n";
    cout<<interest2<<"\n";
    // cout<<interest3<<"\n";
    // Account a1(1,2,3);  // YOU CANT DO TWO ACCOUNT FOR CONSTRUCTOR
    
//     cout<<"Salary :"<<p1.salary<<endl;
//     cout<<"Salary:"<<a1.salary<<endl;
//     cout<<"Bonus:"<<p1.bonus<<endl;
//     p1.display();
// //     cout<<"Bonus:"<<a1.bonus<<endl; // YOU CANT ACESS BASE CLASS PROPERTY FROM DERIVED CLASS
    return 0;
}