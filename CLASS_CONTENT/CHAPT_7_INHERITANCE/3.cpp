//constructor in base class only
#include <iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"Default constructor from base class";
    }

};
class Derived:public Base
{
    //body of derived class
};
int main()
{
    Derived d;
}