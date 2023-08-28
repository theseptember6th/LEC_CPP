// GET FUNCTION

#include<iostream>
using std::cin;
using std::cout;
const int MAX=50;
char str1[MAX];
char str2[MAX];
int main(){
    cout<<"Enter a string terminated by new line:\n";
    cin.get(str1,MAX);
    //read string until MAX character or new line is reached
    cout<<"Enter multiline string terminated by $\n";
    cin.get(str2,MAX,'$');
    //reads multiline string including newline
    //reads string until MAX char or '$' is reached.
    cout<<"STRING 1: "<<str1<<"\n";
    cout<<"STRING 2: "<<str2<<"\n";
return 0;
}