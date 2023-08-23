// default arguments template and non- template



#include<iostream>
using std::cin;
using std::cout;

template<class T=int ,int size=5> // DEFAULT IF NOT SPECIFIED
class Array{
    T marks;
    public:
    void display(){
        cout<<size;
        cout<<marks;
    }


};
int main(){
    Array<>a1;            // not specifying any
    a1.display();
    Array<int>a2;         //specifying template
    a2.display();
    Array<float,5>a3;    // specifying both
    a3.display();
return 0;
}