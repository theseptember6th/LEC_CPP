// both  class template
// not supplying arguments to base while inheritance process


#include<iostream>
using std::cin;
using std::cout;
template<class T>
class base{
    protected:
   T data;
   public:
   base(){};
   base(T x){
    data=x;
   }
   void display(){
    cout<<data;
   }
};
template<class T>
class derived:public base<T>{
    T value;
    public:
    derived(){};
    derived(T a,T b){
        value=a;
        base<T>::data=b;
    }
    void display(){
        base<T>::display();
        cout<<value;
    }
};
int main(){
    derived<int>d1(15,13);
    d1.display();
return 0;
}