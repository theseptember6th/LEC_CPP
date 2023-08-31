//get() read from file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
   fstream file;
   int i;
   file.open("name_list.txt",ios::in);
   char name[25],email[25];
   while(file){//while no erros
        i=0;
        while(name[i]!='\n'){
            file.get(name[i++]);
        }
        i=0;
        while(email[i]!='\n'){
            file.get(email[i++]);
        }
   }
   cout<<"Name: "<<name<<"\n";
   cout<<"Email: "<<email;


return 0;
}                   //code not working