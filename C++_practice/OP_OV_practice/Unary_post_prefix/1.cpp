//PREFIX
//member function no return
#include<iostream>
using std::cin;
using std::cout;

class test{
    int count;
    public:
    test(){
        count=0;
    } 
    void display(){
        cout<<count;
    }
    void operator ++(){
        ++count;
    }

};
int main(){
    test c1;
    ++c1;
    c1.display();
   
return 0;
}