//   one template parameter
#include<iostream>
using std::cin;
using std::cout;
  template <class T>  //  template and class are keywords
  //one template argument so deals only same type of arguments
T max(T a, T b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int x=10,y=20;
    cout<<" "<<max(x,y)<<"\n";
    float a=1.1,b=0.1;
    cout<<" "<<max(a,b);
    char c='a';
    char d='b';
    cout<<" "<<max(c,d);

  //   cout<<" "<<max(x,a);          //error two different types
    
return 0;
}