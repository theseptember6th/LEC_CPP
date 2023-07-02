#include<iostream>
using namespace std;   // even if we dont create namespace, unnamed namespace of each file 
                       //is declared automatically...and each file have different unnamed
                    // namespace

namespace{       //we can also create unnamed namespace ..and it is acessible globally 
                 // without even writing - "using namespace namespace_name"
    int num=10;                 
    void display()
    {
        num=num+20;
        cout<<"\n"<<num;
    }
}
           // there is no way to link file having unnamedspace on another file
int main(){
    cout<<"\n"<<num;
    display();
}

