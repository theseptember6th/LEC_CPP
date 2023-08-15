// reference variable

#include<iostream>
using std::cin;
using std::cout;

int main(){
    int x=10;
    int &y=x; // reference variable
    cout<<&x;
    cout<<"\n"<<&y;
    return 0;
}