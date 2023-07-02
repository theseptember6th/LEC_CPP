// Nested namespace

#include<iostream>
using namespace std;
namespace outer{
    int num=100;
    //cout<<num;             // this is error  why??
    void display(){
    cout<<num;              // forced to do this
    }
    namespace inner{
        //num=10;              // this is error why?
        int num =10;              // forced to do this
        //cout<<num;
        void display(){
            cout<<num;
        }
    }
}

using namespace outer::inner;

int main(){
    cout<<num;
    using namespace outer;
    cout<<"\n"<<outer::num;
    return 0;
}