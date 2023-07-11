//constructor in base and derived class without default constructor
#include<iostream>
using namespace std;
class Base
{
    public:
    Base(int data)
    {
        cout<<"Parameterized constructor from base class"<<endl;
    }
};
class Derived:public Base{
    public:
    Derived(int data): Base(data)
    {
        cout<<"Parameterized constructor from derived class";
    }
};
int main()
{
    Derived d(5);
}