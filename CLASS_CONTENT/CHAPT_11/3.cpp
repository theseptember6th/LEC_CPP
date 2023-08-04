#include<iostream>
#include<cmath>
using std::cin;
using std::cout;

class number{
private:
double num;
public:
class neg{}; //exception class
void readnum();
 double squareroot();


};
void number::readnum(){
   cout<<"enter number";
   cin>>num;

}
double number::squareroot(){
    if(num<0){
        throw neg();
    }
    else{
        return sqrt(num);
    }
}
int main(){
number n1;
double d;
n1.readnum();
try{
    cout<<"\n trying to find the squareroot \n";
    d=n1.squareroot();
    cout<<" "<<d<<"\n";
    cout<<"sucessful \n";

}
catch(number::neg){
    cout<<"not possible \n";
}
return 0;
}