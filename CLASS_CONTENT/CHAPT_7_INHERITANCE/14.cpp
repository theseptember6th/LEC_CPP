//redefine operator overloading in derived class
#include<iostream>
using namespace std;
class Complex{
    protected:
    float real,imag;
    public:
    Complex(){}
    Complex(float re){real=re;}
    Complex(float re,float im)
    {
        real=re;
        imag=im;      
    }
    Complex operator +(Complex cc);
    void showdata()
    {
        cout<<"("<<real<<","<<imag<<")";

    }
};
Complex Complex::operator +(Complex cc)
{
    float rr=real+cc.real;
    float ri=imag+cc.imag;
    return Complex (rr,ri);

}
class Dcomplex:public Complex 
{
    public:
    Dcomplex(){}
    Dcomplex (float re):Complex(re){}
    Dcomplex(float re,float im):Complex (re,im){}
    Dcomplex(Complex cc):Complex(cc){}
    Dcomplex operator +(Dcomplex dd);
    Dcomplex operator -(Dcomplex dd);  
};
Dcomplex Dcomplex ::operator +(Dcomplex dd)
{
    Dcomplex r;
    r=Dcomplex::operator + (dd);
    return r;
};
Dcomplex Dcomplex ::operator -(Dcomplex dd)
{
    float rr=real-dd.real;
    float ri=imag-dd.imag;
    return Dcomplex(rr,ri);
};
int main()
{
    Dcomplex c1(5.6,7.9),c2(3.2,4.5),c3,c4;
    c3=c1+c2;
    c4=c1-c2;
    cout<<"\nc1=";c1.showdata();
    cout<<"\nc2=";c2.showdata();
    cout<<"\nc3=";c3.showdata();
    cout<<"\nc4=";c4.showdata();
}