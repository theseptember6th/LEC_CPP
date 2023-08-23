//another example of class templates.....stack problem


#include<iostream>
using std::cin;
using std::cout;
#define MAX 20
 template<class T>
class stack{
    T arr[MAX];
    int top;
    public:
    stack(){
        top=-1;
    }
    void push(T x){
        arr[++top]=x;
    }
    T pop(){
        return arr[top--];
    }
    int size(){
        return(top+1);
    }


};
int main(){
    stack<int>s1;
    s1.push(11);
    s1.push(22);
    s1.push(33);
    cout<<"size: "<<s1.size();
    cout<<"\nNumber popped:  "<<s1.pop();
    cout<<"\nNumber popped:  "<<s1.pop();
    cout<<"\nNumber popped:  "<<s1.pop();

    stack<char>s2;
    s2.push('A');
    s2.push('B');
    s2.push('C');
     cout<<"size: "<<s2.size();
    cout<<"\nCharacter popped:  "<<s2.pop();
    cout<<"\ncharacter popped:  "<<s2.pop();
    cout<<"\ncharacter popped:  "<<s2.pop();
return 0;
}