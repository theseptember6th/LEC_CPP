#include <iostream>
using namespace std;
class Base_one {
public:
Base_one()
{
    cout<<"Base_one class constructor"<<endl;
}
~Base_one()
{
    cout<<"Base_one class destructor"<<endl;
}
};
class Base_two{
    public:
    Base_two()
    {
    cout<<"Base_two class constructor"<<endl;
    }
    ~Base_two()
    {
        cout<<"Base_two class destructor"<<endl;
    }
}; 
class Derived:public Base_two, public Base_one{
    public:
    Derived()
    {
    cout<<"Derived class constructor"<<endl;  
    }
    ~Derived()
    {
        cout<<"Derived class destructor"<<endl;
    }
};
int main(){
    Derived d;
}




