#include<iostream>
using namespace std;
class circle {
    public:
    
    double Calculates(double radius,double PI)
    {
          return PI*radius*radius;
    }
     
     double Calculates(double radius,double PI,double x)
     {
        return x*PI*radius*radius*radius;
     }

};
int main(){
    class circle C1,C2;
    double r;
    
    cout<<"enter the radius of the circle\n";
    cin>>r;
    double Area=C1.Calculates(r,3.14);
    double Volume=C1.Calculates(r,3.14,4/3);
    cout<<"the area is "<<Area;
    cout<<"\nthe volume is "<<Volume;


    



    return 0;
}