// use of ignore 

#include<iostream>
using std::cin;
using std::cout;
int main(){
    char str1[20],str2[20];
    cout<<"Enter the first string: ";
    cin.get(str1,20);
    cin.ignore();//to remove the delimiter newline
    cout<<"enter the next string: ";
    cin.get(str2,20);
    cout<<"You entered: "<<"\n";
    cout<<"String1: "<<str1<<"\n";
    cout<<"String2: "<<str2<<"\n";
return 0;
}