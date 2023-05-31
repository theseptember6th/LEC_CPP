// COMPLEX MULTIPLY



#include<iostream>
using std::cin;
using std::cout;

class complex{
    float real;
    float img;

    public:
    void getdata()
    {
        cout<<"enter the real part:\n";
        cin>>real;
        cout<<"enter the img part:\n";
        cin>>img;
    }
    
    void multiply(complex a,complex b)
    {
        real=(a.real*b.real)-(a.img*b.img);
        img=(a.real*b.img)+(a.img*b.real);
    }

    void display()
    {
        cout<<"("<<real<<"+i"<<img<<")";
    }

};

int main(){
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3.multiply(c1,c2);
    c1.display();
    cout<<"*";
    c2.display();
    cout<<"=";
    c3.display();
    return 0;



}