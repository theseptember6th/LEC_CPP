#include<iostream>
#include<fstream>
using namespace std;


int main(){
   fstream file;  //fstream ko file name vako object
   file.open("createfile.txt",ios::out);

   if(!file){
    cout<<"Error in creating file!!";
    return 0;
   } 
   cout<<"file created sucessfully\n";
   file.close();


return 0;
}