#include<iostream>
#define MAX 2
using std::cin;
using std::cout;

class stack{
     protected:
     int s[MAX];
     int top;
     public:
     class FULL{};
     class EMPTY{};
     stack(){
        top=-1;
     }
     void push(int x){
        if(top==MAX-1)
           throw FULL();
        else{
             s[++top]=x;
        }
     }

     int pop(){
        if(top==-1)
           throw EMPTY();
        else
        return s[top--];   
     }

};

int main(){
    stack s;
    try{
        s.push(11);
        s.push(22);
        s.push(33);
        cout<<s.pop()<<s.pop()<<s.pop();

    }
    catch(stack::FULL){
        cout<<"\n Exception : stack is full\n";
    }
    catch(stack::EMPTY){
        cout<<"\n Exception : stack is empty\n";
    }

return 0;
}