//WAP to write characters entered by users to file until users enters enter key

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out;
    out.open("kristal.txt",ios::out);
    char ch;
    cout<<"START ENTERING CHARACTERS\n";
    while((ch=cin.get())!='\n'){
        out.put(ch);
    }
    out.put('\n');
    out.close();
    return 0;
}