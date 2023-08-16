//PREFIX
//Non member function yes return 
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
   int get_count(){
    return ++count;
   }

};
test operator++(test&a){
     a.get_count();
     return a;
    
}
int main(){
    test c1;
    ++c1;
    c1.display();
   
return 0;
}