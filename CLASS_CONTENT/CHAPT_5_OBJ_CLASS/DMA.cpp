// DMA


#include<iostream>
using std::cin;
using std::cout;

int *roll=new int;
char *name=new char[20];


void getdata(){
    cout<<"enter the roll number:\t";
    cin>>*roll;
    cout<<"\nenter the name :\t";
    cin>>name;
}

void freememory(){
    delete roll;
    delete [] name;
}

void display(){
    cout<<"\n NAME: "<<name;
    cout<<"\n ROLL: "<<*roll;
}

int main(){
      getdata();
     cout<<"\nALLOCATING MEMORY DYNAMICALLY\n";
      display();
     freememory();
     cout<<"\nDISPLAYING AFTER DEALLOCATION";
     display();

    return 0;
}