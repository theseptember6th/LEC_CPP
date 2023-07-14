/*Define a class Complex with members real and imag. Use a constructor to construct the
objects of the class Complex. Using static data members and static functions,display the total number of objects created before terminating the program*/


#include<iostream>
using std::cin;
using std::cout;

class Complex{
     static int real;
     static int img;
    static int count;
    public:
    Complex(){  //normal constructor
                 //that increases the counts values
        count++;
    }

    ~Complex(){     // normal destructor
                             //displaying the number of objects created before terminating
                            //the program
        cout<<"\nThere are"<<count<<"objects";
    }
    


};
int Complex::real=0;
int Complex::img=0;
int Complex::count=0;
int main(){

return 0;
}