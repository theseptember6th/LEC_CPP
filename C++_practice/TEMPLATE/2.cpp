// 2 template parameters

#include<iostream>
using std::cin;
using std::cout;
 template <class T1,class T2>
 void testfunc(T1 a ,T2 b){
    cout<<" "<<a<<" "<<b;
 }
int main(){
    int x=10;
    float y=10.1;

    testfunc(x,y);
    testfunc(y,"kristal shrestha");
    


return 0;
}