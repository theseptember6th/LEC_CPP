//celsius to fahrenheit 
//celsius class  to fahrenheit variable
// FLOAT F=clASS C

#include<iostream>
using std::cin;
using std::cout;

class celsius{
    float C;
    public:
    celsius(){
        C=0;
    }
    operator float(){
       float F;
       F=9*C/5+32;
       return F;
    }
    void input(){
        cout<<"enter celsius\n";
        cin>>C;
    }

};
int main(){
  celsius c1;
  c1.input();
  float fahrenheit;
  fahrenheit=c1;
  cout<<"tempr in Fahrenheit = "<<fahrenheit<<"\n";
return 0;
}