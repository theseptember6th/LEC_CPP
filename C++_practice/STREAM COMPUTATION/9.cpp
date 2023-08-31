//No argument parameterized  --- confused but yes no argument parameterized ... 
// user defined manipulators


#include<iostream>
using namespace std;

ostream& tb(ostream &os){
    os<<"\t";
    return os;
}
int main(){
 int a=1,b=2,c=3,d=4;
 cout<<a<<tb<<b<<tb<<c<<tb<<d;
return 0;
}