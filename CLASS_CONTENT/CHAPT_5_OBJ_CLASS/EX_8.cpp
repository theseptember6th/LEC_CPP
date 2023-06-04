//PARAMETERISED CONSTRUCTOR
#include<iostream>
using std::cin;
using std::cout;

class test{
    int data;
    public:
   test(int x)
   {
     data=x;
     cout<<data;
   }
};

int  main()
{
    test t1=test(5);
   return 0;
}

