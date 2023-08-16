// VIRTUAL DESTRUCTOR


#include<iostream>
using std::cin;
using std::cout;

class vehicle{
     public:
     vehicle(){
        cout<<"BASE CLASS CONSTRUCTOR INVOKED\n";
     }
     virtual void showdata(){
        cout<<"I am Vehicle\n";
     }
     virtual ~vehicle(){
        cout<<"BASE CLASS DESTRUCTOR INVOKED\n";
     }

};
class car:public vehicle{
    public:
    car(){
        cout<<"DERIVED CLASS CONSTRUCTOR INVOKED\n";

    }
    void showdata(){
        cout<<"I am a Car\n";
    }
    ~car(){
        cout<<"DERIVED CLASS DESTRUCTOR INVOKED\n";
    }
};
int main(){
    cout<<"base class pointer pointing base class\n";
    vehicle *vp;
    vp=new vehicle;
    vp->showdata();
    delete vp;
  cout<<"base class pointer pointing derived class \n";
    vp=new car;
    vp->showdata();
    delete vp;

return 0;
}