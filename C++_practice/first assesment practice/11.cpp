#include<iostream>
using std::cin;
using std::cout;

class Number{
    int x;
    //for  prefix unary operator on member function 
    void operator ++();       //called as Number.operator();
    //for postfix unary operator on member function 
      void operator ++(int); //this int is never used it is just the dummy argument to distinguish
                             //called as Number.operator(int);

     //binary operator for member function
     void operator +(Number x);          //called as Number1.operator(number2);                   
};         

    //for  prefix unary operator on non-member function 
    void operator ++(Number);                //called as operator ++(x)
    //for postfix unary operator on non-member function  
      void operator ++(Number,int);     // called as operator ++(x,int)

      //binary operator for non-member function
      void operator+(Number x,Number y);  //called as Numberx.operator(Number y);


int main(){

return 0;
}