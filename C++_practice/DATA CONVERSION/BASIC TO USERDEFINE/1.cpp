//BASIC TO USERDEFINED 
//USING CONSTRUCTOR
#include<iostream>
using std::cin;
using std::cout;

class test{
    int x;
    public:
    test()
    {
        x=0;
    }
    test(int a){
        x=a;
    }
    void display(){
        cout<<x<<"\n";
    }
     

};
int main(){
   test t1,t2,t3;
   int b=20;
   t1=b;  // equivalent to test t1(b)     test t1=test(b); 
   t1.display();
   t2=test(b);
   t2.display();
return 0;
}