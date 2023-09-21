// OVERLOADING WITH OTHER TEMPLATE

#include<iostream>
using std::cin;
using std::cout;

template<class T>        // template with 1 argument
void display(T a){
    cout<<a;
}
template<class T>              // template with 1 argument
void display(T a ,int x){
    for(int i=0;i<x;i++){
        cout<<a;
    }
}
template<class T1,class T2>      // template with 2 different data types arguments 
void display(T1 a, T2 b){
    cout<<a<<" "<<b;
}
int main(){
  display(1);//calls display(T a)
  display(3,2);//calls display(T a ,int x)
  display("KRISTAL",3);//calls display (T a,int x)
  display(3.6,1);//calls display(T a,int x)
  display("Kristal",3.5);//calls display(Ta ,Tb)
return 0;
}