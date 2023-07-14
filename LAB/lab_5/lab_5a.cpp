/*Define a class Complex with attributes real(constant) and imag and a constant member 
function to return the real value and normal function to return the imaginary value of complex
number. Display the complex number outside the class using constant functions*/

#include<iostream>
using std::cin;
using std::cout;

class Complex{
    const float real=8;   //constant variable 
    float img;

    public:
    //Complex(float x):real(x){}   //initialization of constant variable can only be
                                 //done through constructor

    Complex(float y)
    {
        img=y;
    }

    float RETURN()const{
        return real;
    }

    float RETURNS(){
        return img;
    }
    void display(Complex&);
};
void Complex::display(Complex&x){
     cout<<"\n"<<x.real<<"+"<<x.img<<"i";
}


int main(){
    Complex k1(7);
    cout<<"\n real value = "<<k1.RETURN();
    cout<<"\n imaginary value ="<<k1.RETURNS();
    k1.display(k1);
    return 0;
}