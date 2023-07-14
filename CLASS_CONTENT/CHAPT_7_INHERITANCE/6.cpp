//multiple constructor in base and single in derived class
#include<iostream>
using namespace std;
class  Base
{
    public:
    Base(){
        cout<<"Default constructor from base class"<<endl;
    }
    Base (int data){
    cout<<"Paramiterized constructor from base class"<<endl;
    }
};
class Derived : public Base{
    public:
    Derived(int data){
        cout<<"Paramiterized constructor from derived class"<<endl;
    }
};
int main()
{
    Derived d(5);
    return 0;
}