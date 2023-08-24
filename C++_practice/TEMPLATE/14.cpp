//inheriting from template base class but itself is non template derived class

#include<iostream>
using std::cin;
using std::cout;
template<class T>
class base{
    protected:
    T data;
    public:
    base(){};
    base(T a){
        data=a;
    }
    void display(){
        cout<<data;
    }
};
class derived:public base<int>{
     public:
     derived(){};
     derived(int x){
        data=x;
     }
     void display(){
        base::display();
     }
};
int main(){
    derived d1(5); // declaration done normally as creating object normally
    d1.display();

return 0;
}