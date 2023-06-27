#include<iostream>
using std::cin;
using std::cout;

void display(){
    static int i=1;
    i=i+5;
    cout<<"\nthe value of i is: "<<i;
}


int main(){
    display();
    display();
    return 0;
}