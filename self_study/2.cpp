#include<iostream>
using std::cin;
using std::cout;

namespace Kristal{
    int& fun(int &x ,int &y);
}

int& Kristal::fun(int &x,int &y){
    if(x==y){
        return x;
    }
    else{
       return y;
    }
    
}

int main(){
    int x=10;
    int y=10;
    cout<<Kristal::fun(x,y);
    return 0;
}

