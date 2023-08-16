#include<iostream>
using std::cin;
using std::cout;

int main(){
  
    cout<<"\n-------------\n";
    cout<<"Implementing ios::fill\n\n";
    char ch='a';
    cout.fill('+');
    cout.width(10);
    cout<<ch<<"\n";
    
  
return 0;
}