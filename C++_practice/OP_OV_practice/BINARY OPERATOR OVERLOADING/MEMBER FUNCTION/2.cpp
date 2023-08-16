//BINARY OPERATOR MEMBER FUNCN YES RETURN TYPE
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
 complex operator +(complex&a){
    complex temp;
    temp.real=real+a.real;
    temp.imag=imag+a.imag;
    return temp;
 }
 void display(){
    cout<<real<<"\t";
    cout<<imag<<"\t";
 }

};
int main(){
  complex c1(1,2),c2(2,3),c3;
  c3=c1+c2;   //c1.operator+(c2)
  c3.display();
return 0;
}