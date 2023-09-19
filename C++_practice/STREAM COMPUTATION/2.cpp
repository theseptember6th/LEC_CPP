// write() function
#include<iostream>
#include<cstring>
using std::cin;
using std::cout;


int main(){
    char str[]="KRISTAL SHRESTHA ";
    for(int i=0;i<strlen(str);++i){
        cout.write(str,i);
        cout<<"\n";
    }
    return 0;
}