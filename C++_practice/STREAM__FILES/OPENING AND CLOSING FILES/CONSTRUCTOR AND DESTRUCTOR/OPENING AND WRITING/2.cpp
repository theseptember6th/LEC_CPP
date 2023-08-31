// reading from file 

#include<iostream>
#include<fstream>
using namespace std;

int main(){
   ifstream infile("contact.doc");
   char name[25],email[25];
   infile>>name;
   infile>>email;
   cout<<"data in my files are\n";
   cout<<name<<email;  
return 0;
}