//constructor in both base and derived class
#include<iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"Default constructor from base class"<<endl;
    }
};
class Derived:public Base
{
    public:
    Derived()
    {
    cout<<"Default constructor from derived class"<<endl;
    }
};
int main()
{
    Derived d;
}