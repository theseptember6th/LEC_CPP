// Handling errors while inputting numbers

#include<iostream>
using namespace std;
int main(){
    int i;
    while(true) //cycle until input ok
    {
        cout<<"\n enter an integer\n";
        cin>>i;
        if(cin.good()){//if no errors
               cin.ignore(10,'\n');//remove newline
               break;//exit loop
        }
        cin.clear();//clear the error bits
        cout<<"Incorrect input";
        cin.ignore(10,'\n');//remove newline
    }
          
      cout<<"integer is "<<i;//error free integer
      return 0;    
    }