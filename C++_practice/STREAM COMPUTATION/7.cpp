#include<iostream>
#include<iomanip>
using namespace std;
int main(){
//   cout<<2357<<','<<hex<<2357<<','<<oct<<2357<<"\n";
//   cout<<setw(5)<<setfill('#')<<37<<"\n";

  //for ws importancy
  int x;
  char str[25];
  cout<<"enter number: ";
  cin>>x;
  cout<<"enter string: ";
  cin>>ws;// to extract new line created by cin>>x such that getline works normally
  cin.getline(str,25);
return 0;
}