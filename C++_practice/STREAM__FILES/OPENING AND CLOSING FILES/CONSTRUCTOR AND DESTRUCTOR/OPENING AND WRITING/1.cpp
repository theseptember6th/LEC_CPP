// opening and writing to a file

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char name[25],email[25];
    ofstream outfile("contact.doc");
    cout<<"enter name:\n";
    cin>>name;
    outfile<<name;
    cout<<"\nenter email:\n";
    cin>>email;
    outfile<<email;


return 0;
}