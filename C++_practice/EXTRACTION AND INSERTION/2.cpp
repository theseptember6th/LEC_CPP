//presenting complex number

#include<iostream>
using namespace std;

class complex{
    float real;
    float imag;
    public:
    complex(){
        real=0;
        imag=0;
    }
    complex(int x,int y){
        real=x;
        imag=y;
    }
    friend ostream& operator << (ostream&,complex&);
    friend istream& operator >> (istream&,complex&);
 
};

istream& operator >> (istream&input,complex&c){
    cout<<"enter the real part\n";
    input>>c.real;
    cout<<"enter the imaginary part\n";
    input>>c.imag;
    return input;
}

ostream& operator << (ostream&output,complex&c){
    output<<"\npresenting complex number\n";
    output<<c.real<<"+i"<<c.imag;
    return output;
}

int main(){
    complex c1;
    cin>>c1;
    cout<<c1;
    return 0;
}