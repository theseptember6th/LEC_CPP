//fahrenheit to celsius 
// fahrenheit basic variable to celsius class
// C=f

#include<iostream>
using std::cin;
using std::cout;

class celsius{
    float C;
    public:
    celsius(){
        C=0;
    }
    celsius(float F){
        C=(F-32)*5/9;
    }
    void display(){
        cout<<C;
    }

};
int main(){
   float fahrenheit =98;
   celsius c1;
   c1=fahrenheit;
   c1.display();
return 0;
}