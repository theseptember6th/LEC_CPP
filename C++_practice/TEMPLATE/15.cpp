//both base template and derived template
//but supplying the base class with data type while inheritance process

#include<iostream>
using std::cin;
using std::cout;
template<class T>
class base{
    protected:
    T data;
    public:
    base(){};
    base(T a){
        data=a;
    }
    void display(){
        cout<<data;
    }
};
template<class T>
class derived:public base<int>{
   T value;
   public:
   derived(){};
   derived(T x,int y){
    value=x;
    data=y;
   }
   void display(){
    cout<<value;
    base::display();
   }
};
int main(){
 derived<int>d1(2,3);
 d1.display();
return 0;
}