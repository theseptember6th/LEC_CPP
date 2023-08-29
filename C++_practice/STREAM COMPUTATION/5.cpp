// setf(F,B) 
//F=floatvalue ,B=bitfield
#include<iostream>
using namespace std;
int main(){
// I) for bit field ios::adjustfield
// and flag associated with it             
// 1) for flag value == ios::left
//  int x=456;
//    cout.setf(ios::left,ios::adjustfield);        
//    cout.width(6);
//    cout.fill('#');
//    cout<<x<<"\n";
 
// 2) for flag value == ios::right
// int x=456;
//    cout.setf(ios::right,ios::adjustfield);        
//    cout.width(6);
//    cout.fill('#');
//    cout<<x<<"\n";

// 3) for flag value == ios::internal
// int x=-456;
//  cout.setf(ios::internal,ios::adjustfield);
//  cout.width(6);
//  cout.fill('#');
//  cout<<x<<"\n";
    
//II) for bitfield ios::basefield
//and its flag associated with it
//1)for flagvalue= ios::oct
//   int x=255;
// cout.setf(ios::oct,ios::basefield);
// cout<<x<<"\n";

//2) for flagvalue= ios::hex
// int x=255;
// cout.setf(ios::hex,ios::basefield);
// cout<<x<<"\n";

//3) for flagvalue= ios::dec
// int x=255;
// cout.setf(ios::dec,ios::basefield);
// cout<<x<<"\n";

//III)for bitfield  ios::floatfield

//1)for flagvalue =ios::scientific
// double x=123456789.0123;
// cout.setf(ios::scientific,ios::floatfield);
// cout<<x<<"\n";

//2)for flagvalue= ios::fixed
// double x=123456789.0123;
// cout.setf(ios::fixed,ios::floatfield);
// cout<<x<<"\n";

//Reseting the precision
double x=3671.52698;
cout.setf(ios::fmtflags(0),ios::floatfield);//resets to general format as default precision=6
cout<<x<<"\n";
// return 0;
}