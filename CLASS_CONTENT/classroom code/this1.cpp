#include<iostream>
using std::cin;
using std::cout;


class mobile{
    int m=10;

    public:

    void display(){
         cout<<"\nthe value of m is "<< this->m; 
         cout<<"\nthe address of the current object is "<<this;
        //  cout<<"\nadress of m is "<<&m;
        cout<<&display;
       
    }

};
int main(){
    class mobile m1,m2;
    m1.display();
    m2.display();

    return 0;
}