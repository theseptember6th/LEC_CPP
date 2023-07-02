#include<iostream>
using std::cin;
using std::cout;

int& max(int &z,int &x){
   if(x>z){
    return x;
   }
   else{
    return z;
   }
}
int main(){
   int x=10;
   int y=20;
   max(x,y)=-10; 
   cout<<y;
   
return 0;
}