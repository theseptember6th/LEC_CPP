//BINARY OPERATOR MEMBER FUNCN NO RETURN TYPE
#include<iostream>
using std::cin;
using std::cout;

class complex{
 float real;
 float imag;
 public:
 complex(){
    real=0;
    imag=0;
 }
 complex(float x,float y){
    real=x;
    imag=y;
 }
 void operator +(complex&a){
    real=real+a.real;
    imag=imag+a.imag;
 }
 void display(){
    cout<<real<<"\t";
    cout<<imag<<"\t";
 }

};
int main(){
  complex c1(1,2),c2(2,3);
  c1+c2;   //c1.operator+(c2)
  c1.display();
return 0;
}