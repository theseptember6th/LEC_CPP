#include<iostream>
using std::cin;
using std::cout;
int main(){
   int a,b;
   cout<<"enter the values of a and b\n";
   cin>>a>>b;
   int x;
   try{
    if(a==b){
        throw (a);
    } else {
        x=a/(a-b);
        cout<<"value of x is \n"<<x;
    } 
   }

   catch (int a){
         cout<<"DIVIDE BY ZERO \n";
   }
   cout<<"Code here?";
   
   
return 0;
}