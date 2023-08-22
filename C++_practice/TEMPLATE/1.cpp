//   one template parameter
#include<iostream>
using std::cin;
using std::cout;
  template <class T>  // template and class are keywords
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
return 0;
}