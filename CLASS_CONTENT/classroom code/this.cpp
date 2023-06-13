#include <iostream>
using std::cin;
using std::cout;

class A{

    int x;
    public:
    void getnum(int x){
        this-> x=x;   // "this" is a pointer carries address of the object
                      
    }

    void showNum(){
        cout<<"\n"<<x;
    }

};

int main(){
   class A A1,A2;
   A1.getnum(5);
   A1.showNum();
   A2.getnum(10);
   A2.showNum();
   return 0;

}