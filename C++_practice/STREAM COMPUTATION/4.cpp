// width formatted function


#include<iostream>
using std::cin;
using std::cout;

int main(){
    //simple
    //case 1
    cout.width(6);
    cout<<1234;

    cout<<"\n";
      
    //case 2
    cout.width(6);
    cout<<123;
    cout<<"\n";

    //analyze
     cout.width(6);
     cout<<12;
     cout<<34; 
     cout<<"\n";        //expected this _ _ 1 2 3 4   but... _ _ _ _ 1 2 3 4
    
    //good practise
    cout.width(6);
    cout<<12;              
    cout.width(3);          //_ _ _ _ 1 2 _ 3 4
    cout<<34;         
return 0;
}