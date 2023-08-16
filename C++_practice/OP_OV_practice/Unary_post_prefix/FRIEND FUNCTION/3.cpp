//PREFIX
// FRIEND Non member function YES return 
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
  friend test operator++(test&);
};
test operator++(test&a){
  a.count++;
  return a;
}
int main(){
    test c1,c2;
    c2=++c1;
    c2.display();
   
return 0;
}