// copy constructor

#include <iostream>
using std::cin;
using std::cout;

class kristal{
    int x;
    public:
    kristal(){};
    kristal(int n){
        x=n;
    }
    void display(){
        cout<<"\n"<<x;
    }
    //even if we dont make constructor eligible for copy..the compiler will automatically set a default constructor that will copy values of same type object to another object...

                              //OR you can make copy constructor manually like
    kristal(kristal &x){     //reference object parameter nai hunu parxa otherwise a call to
                            //copy constructor with object value parameter would be made to call
                            //copy constructor which becomes a non-terminating chain of calls. 
       this->x=x.x;
    }


     kristal(kristal x){     //* error it means copy k1 to x then copy k2 to k1..you are making
                            //function for copying and there is copy literally at the beginning 
                            //at the parameters
       this->x=x.x;
    }
    
    kristal(int x,int y){                        //constructor overloading
        cout<<"\n"<<"Area is "<<x*y;
    }

    kristal(int x,int y,int z){
        cout<<"\n"<<"volume is"<<x*y*z;  
     }
    
      
};

int main(){
    kristal k1(5);       // parameterized constructor
    kristal k2(k1);     // intializing k2 with copy of k1 implicitly
    kristal k3=k1;      // intializing k3 with copy of k1 explicitly
      k2.display();
      k3.display();
    kristal k4(1,2);          //constructor overloading call
    kristal k5(1,2,3);
    return 0;
}
