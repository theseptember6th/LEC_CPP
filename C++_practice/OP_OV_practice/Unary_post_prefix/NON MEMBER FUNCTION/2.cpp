//POSTFIX
// Non member function no return 
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
    return count++;
   }

};
void operator++(test&a,int){
    a.get_count();
}
int main(){
    test c1;
    c1++;
    c1.display();
   
return 0;
}