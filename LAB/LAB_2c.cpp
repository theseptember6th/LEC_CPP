// PASSING VALUE BY POINTERS


#include<iostream>
using std::cin;
using std::cout;

void swap_numbers(int*x,int*y){
         int temp;
         temp=*x;
         *x=*y;
         *y=temp;
}
void set_data(int*x,int*y){
     cout<<"enter the value of the first number and second number\t";
     cin>>*x>>*y;
}
void display(int*x,int*y){
    cout<<"\nfirst number is "<<*x<<" & second number is  "<<*y;
}


int main(){
    int x,y;
     set_data(&x,&y);
    swap_numbers(&x,&y);
    display(&x,&y);
    return 0;
}