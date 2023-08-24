//both template
// adding extra template parameter in derived class


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
template<class T1,class T2>
class derived:public base<T1>
{ T2 value;
  public:
  derived(){};
  derived(T1 a,T2 b):base<T1>(a),value(b){}      //member initialization list is preferred
                                                 //than normal initialization
    
  void display(){
    base<T1>::display();
    cout<<value;
  }
     
};
int main(){
 derived<int,float>d1(2,3.1);
 d1.display();
return 0;
}