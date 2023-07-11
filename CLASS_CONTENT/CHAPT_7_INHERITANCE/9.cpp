//passing parameters to multiple constructors
#include<iostream>
using namespace std;
class Base_one
{
    public:
        Base_one()
        {
            cout<<"No parameter constructor from base_one class";
        }
        Base_one(int x){
            cout<<"\nParameterized constructor from base_one class"<<endl;
        }
};
class Base_two
{
    public:
        Base_two(){
            cout<<"\nNo parameter constructor from base_two class";
        }
        Base_two(int y){
            cout<<"\nParameterized constructor from base_two class"<<endl;
        }
};
class Derived:public Base_one, public Base_two
{
    public:
        Derived(){
            cout<<"\nNo parameter constructor from derived class"<<endl;
        }
        Derived(int x,int y,int z):Base_one(x),Base_two(y){
            cout<<"\nParameterized constructor from derived class"<<endl;
        }
};
int main(){
    Derived d1;
    Derived d(1,2,3);
}