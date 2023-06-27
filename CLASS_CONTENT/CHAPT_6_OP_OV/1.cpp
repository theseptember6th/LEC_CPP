#include<iostream>
#include<cmath>
using std::cin;
using std::cout;


class kristal{
    int A;
    int B;
    int C;

    public:
    kristal(int x, int y,int z){
        A=x;
        B=y;
        C=z;
    }

    void operator -(){
        A=-A;
        B=-B;
        C=-C;
    } 

    void display(){
        cout<<A<<"\t";
        cout<<B<<"\t";
        cout<<C<<"\t";

    }

};

int main(){
    class kristal k1(1,2,3);
    k1.display();
    -k1;
    
    k1.display();
    return 0;
}