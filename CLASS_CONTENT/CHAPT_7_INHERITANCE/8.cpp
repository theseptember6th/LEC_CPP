//constructor in multiple derived class#include<iostream>
#include<iostream>
using namespace std;
class Base_one
{
    public:
    Base_one()
    {
        cout<<"Base_one class constructor"<<endl;
    }
};
class Base_two
{
    public:
    Base_two()
    {
        cout<<"Base_two class constructor"<<endl;
    }
};
class Derived:public Base_two,public Base_one
{
    public:
    Derived()
    {
        cout<<"Derived class constructor"<<endl;
    }
};
int main()
{
    Derived d;
}