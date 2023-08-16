// Ambiguity in multiple level inheritance


#include<iostream>
using std::cin;
using std::cout;

class base1{
    public:
    void display(){
        cout<<"display 1\n";
    }


};
class base2{
    public:
    void display(){
        cout<<"display 2\n";
    }
};
class derived:public base1,public base2{
    public:
    void output(){
        //display(); //error
        base1::display();
        base2::display();
    }
};
int main(){
  derived d1;
  d1.output();
return 0;
}