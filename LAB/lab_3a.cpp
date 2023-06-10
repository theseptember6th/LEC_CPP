/*WRITE A C++ PROGRAM THAT CALCULATES THE AREA OF THE CUBE (LENGTH IN INTEGER VALUE AND
DEFAULT LENGTH IS 10 METER) ,CIRCLE(RADIUS IN DECIMAL VALUE) AND RECTANGLE (LENGTH AND 
BREADTH IN DECIMAL VALUES).YOU MUST PROVIDE OPTIONS TO ENTER THE INPUT DIMENSIONS OF 
ABOVE SOLIDS.(USE FUNCTION OVERLOADING WITH DEFAULT ARGUMENTS) */


#include<iostream>
#define PI 3.14
using std::cin;
using std::cout;


void CalculateArea(float l,float b,float h)
{
    cout<<"\nthe total surface area of the cube is: "<<2*l*b+2*l*h+2*b*h<<"\n";
}

void CalculateArea(float r)
{
   cout<<"\nthe area of the circle is "<<2*PI*r*r<<"\n"; 
}

void CalculateArea(float l,float b){
    cout<<"\nthe area of the rectangle is "<<l*b<<"\n";
}

int main(){
    do{
        int selection;
        cout<<"\nEnter 1 to calculate area of cube";
        cout<<"\nEnter 2 to calculate area of cirlce";
        cout<<"\nEnter 3 to calculate area of rectangle \n";
        cin>>selection;

        switch(selection){

            case 1:
            float length,breadth,height;
            cout<<"\nenter the length , breadth and height of the cube ";
            cin>>length>>breadth>>height;
            CalculateArea(length,breadth,height);

            break;

            case 2:
            float radius;
            cout<<"\n enter the radius of the circle ";
            cin>>radius;
            CalculateArea(radius);
            break;

            case 3:
            float lengths,breadths;
            cout<<"\n enter the length and breadth of the rectangle ";
            cin>>lengths>>breadths;
            CalculateArea(lengths,breadths);
            break;

            default:
            cout<<"\nINVALID DIGIT";
            exit(-1);

            
        }

        
        

    }while(1);
    return 0;
}