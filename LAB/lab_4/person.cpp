#include<iostream>
#include "person.h"
using std::cin;
using std::cout;

void Person::getdata(){
    cout<<"\n enter your name: ";
    cin>>name;
    cout<<"\nenter your age: ";
    cin>>age;
}

void Person::display(){
    cout<<"\nNAME: "<<name;
    cout<<"\nAge: "<<age;
    
}

