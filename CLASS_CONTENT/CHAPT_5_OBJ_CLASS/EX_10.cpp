// PROGRAM FOR FRIEND FUNCTION
// TO ACESS PRIVATE DATA OF CLASSES ,WE USE FRIEND FUNCTION
#include<iostream>
using std::cin;
using std::cout;

class SHRESTHA; //declaration like function prototype

class KRISTAL{
     float real;
     float img;

     public: // FRIEND FUNCTION CAN BE PLACED IN PRIVATE & PUBLIC.IT DOESNT MATTER.
    friend KRISTAL add(KRISTAL X,SHRESTHA Y);  // FRIEND FUNCTION 
    // THIS COMMAND GIVES ACCESS to "add" function to use private members
    KRISTAL(float x,float y){
        real=x;
        img=y;
    }
    KRISTAL(){
        real=0;
        img=0;
    };
   void display();
   
};

class SHRESTHA{
    float real;
    float img;
    
    public:
    friend KRISTAL add(KRISTAL X,SHRESTHA Y);  // FRIEND FUNCTION
    // THIS COMMAND GIVES ACCESS to add function to use private members
    SHRESTHA(float x,float y){
        real=x;
        img=y;
    }
    void display();
};

KRISTAL add(KRISTAL X,SHRESTHA Y){             //FRIEND FUNCTION
   KRISTAL A;
    A.real=X.real+Y.real;
    A.img=X.img+Y.img;
    return A;
}

void KRISTAL:: display()                   //  MEMBER FUNCTION
{
   cout<<"("<<real<<"+"<<img<<"i)";
}
void  SHRESTHA::display()                   
{
   cout<<"("<<real<<"+"<<img<<"i)";
}

int main(){
    class KRISTAL k1(1,2),k2;
    class SHRESTHA s1(2,3);
    k1.display();  //calling member function
    cout<<" + ";
    s1.display();
    cout<<" = ";
    k2=add(k1,s1);  //calling FRIEND FUNCTION LIKE NORMAL FUNCTION
    k2.display();
    return 0;
}


