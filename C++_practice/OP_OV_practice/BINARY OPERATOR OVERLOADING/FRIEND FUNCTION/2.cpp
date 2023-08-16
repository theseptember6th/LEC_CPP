//BINARY OPERATOR FRIEND NON- MEMBER FUNCN NO RETURN TYPE
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
 void display(){
    cout<<real<<"\t";
    cout<<imag<<"\t";
 }
  friend void operator +(complex&,complex&);
};
 void operator +(complex&a,complex&b){
   
     a.real=a.real+b.real;
     a.imag=a.imag+b.imag;
    
 }
int main(){
  complex c1(1,2),c2(2,3),c3;
  c1+c2;   //c1.operator+(c2)
  c1.display();
return 0;
}