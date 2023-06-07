// DESTRUCTOR


#include<iostream>
using std::cin;
using std::cout;
int constructors=0;
int destructors=0;
class KRISTAL{
  public:
//CONSTRUCTOR
  KRISTAL(){
    constructors++;
    cout<<"\ndue to creation of object, constructor is called  "<<constructors+1<<" time";
  }

   //destructor frees the memory allocated by the constructor or class
   //destructor cant have return type and arguments
   ~KRISTAL(){
    destructors++;
    cout<<"\ndue to termination of program or either end of object, destructor is called "<<destructors+1<<" time";
   }

};

int main(){
    cout<<"\nLETS START";
    KRISTAL k1;
    //creation of object k1

    {
        KRISTAL k2,k3;
        //creation of k2,k3 objects

    } //k2,k3 is terminated because it is valid within bracket and outside bracket,it is deleted so destructor is called after this

    return 0;
    // after return 0 ... program terminates which means the  k1 object is also invalid..so destructor is called and frees it.


}

