// 2 template parameters  specifying explicitly

#include<iostream>
using std::cin;
using std::cout;
 template <class T1,class T2>
 void testfunc(T2 a){
    T1 b;
    cout<<" "<<b<<" "<<a;

 }
int main(){
    int x=10;
  // testfunc(x); //error 
    testfunc<float>(x);
    testfunc<float,int>(x);
    testfunc<int ,float>(x);
 
    


return 0;
}