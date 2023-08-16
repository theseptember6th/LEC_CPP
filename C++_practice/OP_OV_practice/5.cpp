//POSTFIX
//member function YES return  using this pointer
#include<iostream>
using std::cin;
using std::cout;

class test{
    int count;
    public:
    test(){
        count=0;
    } 
    test(int n){
        count=n;
    }
    void display(){
        cout<<count;
    }
    test operator ++(int){
        count++;
        return *this;
    }

};
int main(){
    test c1,c2;
    c2=c1++;
    c2.display();
   
return 0;
}