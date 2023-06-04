// swap numbers by reference

#include<iostream>
using std::cin;
using std::cout;

void swapnumbers(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void display(int num1,int num2)
{
    cout<<"the value of num1 is "<<num1<<" and value of num2 is "<<num2;
}
int main(){
    int num1,num2;
    cout<<"enter the values for two numbers";
    cin>>num1>>num2;
    swapnumbers(num1,num2);
    display(num1,num2);
    

    return 0;
}