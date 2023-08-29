//setf(F)
// F=flagvalue  and no bit fields

#include<iostream>
using namespace std;
int main(){
//1) flagvalue= ios::showbase
//    int x=118;
//    cout.setf(ios::hex,ios::basefield);
//    cout.setf(ios::showbase);
//    cout<<x<<"\n";

//2) flagvalue= ios::showpoint
// double x=98.4012;
// cout.setf(ios::showpoint); //includes even trailing zeroes in fraction parts
// cout<<x<<"\n";

//3)flagvalue= ios::showpos
// int x=255;
// cout.setf(ios::showpos);  //shows positive sign
// cout<<x<<"\n";

//4)flagvalue= ios::uppercase
// int x=255;
// cout.setf(ios::hex,ios::basefield);
// cout.setf(ios::uppercase);
// cout<<x<<"\n";

// double x=37925.13;
// cout.setf(ios::scientific,ios::floatfield);
// cout.setf(ios::uppercase);
// cout<<x<<"\n";

//5)flagvalue= ios::boolalpha
cout.setf(ios::boolalpha);
cout<<true;
return 0;
}