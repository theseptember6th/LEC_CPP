//UNARY  OPERATOR MEMBER FUNCN NO RETURN TYPE
#include<iostream>
using std::cin;
using std::cout;

class test{
 int count;
 public:
 test(){
    count=1;
 }
 void operator -(){
    count=-count;
 }
 void display(){
    cout<<count;
 }

};
int main(){
  test t1;
  -t1;
  t1.display();
return 0;
}