// writing to a file

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char name[25],email[25];
    ofstream outfile;
    outfile.open("contact.doc");
    cout<<"enter name:\n";
    cin>>name;
    cout<<"enter email:\n";
    cin>>email;
    outfile<<name<<endl;
    outfile<<email;
    outfile.close();
return 0;
}