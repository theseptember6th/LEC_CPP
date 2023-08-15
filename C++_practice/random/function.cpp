#include<iostream>
#include"functionS.h"
using std::cin;
using std::cout;
int *roll= new int;
char *name= new char [15];


void getdata1(){
      cout<<"enter the value: ";
      cin>>x;
}
void getdata2(){

        cout<<"\nenter the two values :";
        cin>>x>>y;
}
void swapdata(float x,float y){
        float temp;
        temp=x;
        x=y;
        y=temp;
}
void swapdata(float &x,float &y){
       float temp;
        temp=x;
        x=y;
        y=temp;
}

void swapdata(float *x,float *y){
    float temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void inputdata(){
    cout<<"\nenter the name ";
    cin>>name;
    cout<<"\n enter the roll ";
    cin>>*roll;
}
void displaydata(){
    cout<<"\nNAME: "<<name;
    cout<<"\nROLL: "<<*roll;    
}
void freeMemory(){
      delete roll;
      delete [] name;
}




