// friend function + friend class


#include<iostream>
using std::cin;
using std::cout;

class complex{
    int real;
    int img;
    public:
       complex(){
        real=0;
        img=0;
       };

       complex(int x,int y){
        real=x;
        img=y;
       }

       void display(){
        cout<<real<<"+"<<"i"<<img;
       }
    friend complex add(complex,complex);
};

complex add(complex cc1,complex cc2){
        complex cc3;
        cc3.real=cc1.real+cc2.real;
        cc3.img=cc1.img+cc2.img;
        return cc3;
}

int main(){
    complex c1(1,2),c2(3,4),c3;
    c3=add(c1,c2);
    c3.display();
return 0;
}