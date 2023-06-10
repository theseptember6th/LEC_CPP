//WRITE A PROGRAM TO ILLUSTRATE DYNAMIC ALLOCATION OF MEMORY USING NEW AND DELETE


#include<iostream>
using std::cin;
using std::cout;

int *roll= new int;
char *name= new char [15];

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

int main(){
     inputdata();
     cout<<"MEMORY ALLOCATED DYNAMICALLY ";
     displaydata();
     cout<<"\nVALUES BEFORE DEALLOCATION";
     freeMemory();
     displaydata();
     cout<<"\n VALUES AFTER DEALLOCATION ";
     return 0;

}