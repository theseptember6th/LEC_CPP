// changing uppercase to lower case


#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main(){
    fstream file;
    file.open("kristal.txt",ios::in);
    fstream newfile;
    newfile.open("copied.txt",ios::out|ios::trunc);
    if(file.fail()){
        cout<<"\nerror opening the file";
        exit(1);
    }
    file.seekg(0,ios::beg);
    char ch;
    while((ch=file.get())!=EOF){
         if(ch>='A'&&ch<='Z'){
            ch=ch+32;
            newfile.write((char*)&ch,sizeof(ch));
         }
         else{
            newfile.write((char*)&ch,sizeof(ch));
         }
    }
   file.close();
   newfile.close();
return 0;
}