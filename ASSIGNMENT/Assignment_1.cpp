/* THIS PROGRAM INCLUDES CLASS,OBJECT,METHOD,ATTRIBUTES,MEMBER FUNCTION
 AND NON MEMBER FUNCTION , CONSTRUCTOR,AND PARAMETERIZED CONSTRUCTOR */

#include<iostream>
using std::cin;
using std::cout;

class COMPLEX{
   // ATTRIBUTES
    float real;
    float img;

    public:
    
    // DEFAULT CONSTRUCTOR
    COMPLEX(){
        real=0;
        img=0;
    }

    //PARAMETERIZED CONSTRUCTOR
     COMPLEX(float x,float y){
      real=x;
      img=y;
     
     }      
   
     //MEMBER FUNCTION 1
     void SUBTRACT(COMPLEX X,COMPLEX Y){
        real=X.real-Y.real;
        img=X.img-Y.img;
     }
    
     //MEMBER FUNCTION 2
     void display()
     {
        cout<<"("<<real<<"+"<<img<<"i)";
     }
     


     //DECLARATION FOR NON-MEMBER FUCNTION SO IT CAN ACCESS PRIVATE ATTRIBUTES
     void getdata();
     void multiply(COMPLEX,COMPLEX);

};

// NON MEMBER FUNCTION 1

void COMPLEX::multiply(COMPLEX A,COMPLEX B){
       real=(A.real*B.real)-(A.img*B.img);
       img=(A.real*B.img)+(A.img*B.real);
}
// NON MEMBER FUNCTION 2
void COMPLEX::getdata(){
    cout<<"enter the real part of the complex numnber: ";
    cin>>real;
    cout<<"enter the imaginary part of the complex number; ";
    cin>>img;
}


int main(){
    COMPLEX c1,c2(2,3),c3,c4,c5;   //OBJECTS

    c1.display();
    cout<<"\n";
    c2.display();
     cout<<"\n";       //   FUNCTION CALLING
    c3.getdata();
    c3.display();
    cout<<"\n";
    c4.getdata();
    c4.display();
     cout<<"\n";

    c5.multiply(c3,c4);
    cout<<"the multiplication:\n";
    c3.display();
    cout<<" * ";
    c4.display();
    cout<<" = ";
    c5.display();

    cout<<"\n";

    c5.SUBTRACT(c3,c4);
    cout<<"the Subtraction:\n";
    c3.display();
    cout<<" - ";
    c4.display();
    cout<<" = ";
    c5.display();

    return 0;
}



