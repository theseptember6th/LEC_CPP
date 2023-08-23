//FUNCTION TEMPLATE WITH USER DEFINED ARGUMENTS
//trying to compare two complex classes
// i need to overload the > operator then i need to proceed
#include<iostream>
using namespace std;
#include<cmath>

#include<iostream>
using std::cin;
using std::cout;

class complex{
  float real;
  float img;
  public:
  complex(){
    real=0;
    img=0;
  }
  complex(float x,float y){
    real=x;
    img=y;
  }
  void display(){
    cout<<real<<" "<<img;
  }
  bool operator >(complex&);  // bool data type is used to return true or false in if condn
};
 bool complex::operator>(complex&a){
    float c1,c2;
    c1=real*real+img*img;
    c1=sqrt(c1);
    c2=a.real*a.real+a.img*a.img;
    c2=sqrt(c2);
    if(c1>c2){
        return true;
    }
    else{
        return false;
    }
}
template <class T>          //generic template function
T fmax(T a, T b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
   int a=1,b=2;
   int x=fmax(a,b);
   cout<<x;
   complex c1(3,4),c2(2,5),c3;
   c3=fmax(c1,c2);
   c3.display();
   
return 0;
}

