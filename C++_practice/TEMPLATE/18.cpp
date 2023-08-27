// base class not template ...derived class template

#include<iostream>
using std::cin;
using std::cout;

class base{
    int data;
    public:
    base(){};
    base(int x){data=x;}
    void display(){
        cout<<data;
    }
};
template<class T>
class derived:public base{
    T value;
    public:
    derived(){};
    derived(T x,int y):value(x),base(y){}
        
    void display(){
        base::display();
        cout<<value;
    }
};
int main(){
   derived<int>d1(20,30);
   d1.display();
return 0;
}