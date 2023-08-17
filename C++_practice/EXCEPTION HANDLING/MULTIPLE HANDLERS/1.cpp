//push pop   STACK PROBLEM
#include<iostream>
#define MAX 2
using std::cin;
using std::cout;

class A{
     int num[MAX];
     int top;

     public:
     class FULL{};
     class EMPTY{};
     A(){
        top=-1;
     }
     void push(int x){
        if(top==MAX-1){
            throw FULL{};
        }
        else{
            num[++top]=x;
        }
     }
     int pop(){
        if(top==-1){
            throw EMPTY{};
        }
        else{
            return num[top--];
        }
     }

};
int main(){
    A a;
    try{
    a.push(3);
    a.push(7);
    a.push(8);
    cout<<a.pop();
    cout<<a.pop();
    cout<<a.pop();
    }
    catch(A::EMPTY){
        cout<<"EMPTY\n";

    }
    catch(A::FULL){
        cout<<"FULL\n";
    }



return 0;
}