//BINARY OPERATOR NON- MEMBER FUNCN YES RETURN TYPE

// it is very challenging to do without using friend function
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
 float return_real(){
    return real;
 }
 float return_imag(){
    return imag;
 }
 
 void display(){
    cout<<real<<"\t";
    cout<<imag<<"\t";
 }

};
 complex operator +(complex&a,complex&b){
    
        float c;
        float d;
     c=a.return_real()+b.return_real();
     d=a.return_imag()+b.return_imag();         
    
     return complex(c,d);

  }
int main(){
  complex c1(1,2),c2(2,3),c3;
  
  c3=c1+c2;   
  c3.display();
return 0;
}
//code doesnt work