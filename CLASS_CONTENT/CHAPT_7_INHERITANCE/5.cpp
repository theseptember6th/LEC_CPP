//constructor in derived class only
#include<iostream>
using namespace std;
class Base{
    //body of base class
};
class Derived:public Base{
    public:
        Derived(){
            cout<<"Default constructor from derived class";
        }
};
int main(){
    Derived d;
}