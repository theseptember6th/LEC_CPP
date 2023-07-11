//no constructor in base and derived class
#include<iostream>
using namespace std;
class Base
{
    // no constructor
};
class Derived:public Base{
    public:
    //no constructor
    void message()
    {
        cout<<"No costructor in base and derived class";
    }
};
int main()
{
    Derived d;
    d.message();
}