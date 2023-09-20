// reading from the kristal.txt char-char
//screen ma dekhaunu paryo read garera

#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;


int main(){
    ifstream in;
    in.open("kristal.txt",ios::in);
    if(in.fail()){
         cout<<"error in opening file\n";
         cout<<"exiting";
         exit(1);
    }
    char ch;
    while((ch=in.get())!=EOF){
        cout<<ch;
    }
  return 0;
}