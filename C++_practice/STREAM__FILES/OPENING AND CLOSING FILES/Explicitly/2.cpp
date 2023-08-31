//reading from a file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char name[25],email[25];
   ifstream infile;
   infile.open("contact.doc");
   infile>>name;
   infile>>email;
   cout<<"INFOS IN FILE\n";
   cout<<name<<endl;
   cout<<email;
return 0;
}