//PREFIX
//member function YES return using this pointer
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
    test operator ++(){
        ++count;
        return *this;
    }

};
int main(){
    test c1;
    ++c1;
    c1.display();
   
return 0;
}