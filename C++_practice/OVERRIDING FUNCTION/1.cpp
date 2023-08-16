// OVERRIDING THE FUNCTION WHEN FUNCTIONS ARE OVERLOADED IN BASE


#include<iostream>
using std::cin;
using std::cout;

class base{
    public:
    void display(char a){
             cout<<"display in base class with char argument\n";
    }
    void display(int x){
        cout<<"display in derived class with int agrument\n";
    }
};
class derived:public base{
    public:
    void display(){
        cout<<"display in derived class\n";
    }
};
int main(){
    derived d1;
    d1.display();
    d1.base::display(10);
    d1.base::display('c');

return 0;
}