//C++ OBJECTS AS DATA TYPES
// ADDING TWO COMPLEX NUMBERS

#include<iostream>
using std::cin;
using std::cout;

class complex{
    float real;
    float img;

    public:
    void getdata()
    {
        cout<<"Enter the real part\n";
        cin>>real;
        cout<<"Enter the complex part\n";
        cin>>img;

    }

    void add(complex x,complex y)
    {
        real=x.real+y.real;
        img=x.img+y.img;
    }

    void showdata()
    {
        cout<<"("<<real<<"+"<<img<<"i)";
    }

};
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c1.showdata();
    cout<<"+";
    c2.showdata();
    cout<<"=";
    c3.add(c1,c2);
    c3.showdata();
    return 0;
}