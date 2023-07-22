/*Write a program having Polygon as an abstract class with Length and Height as its
data member. Create derived classes Rectangle and Triangle. Make Area() as a pure virtual 
and redefine it in the derived class to calculate the respective Area. */

#include<iostream>
#include <cmath>
using std::cin;
using std::cout;

class Polygon{
    protected:
    int length;
    int breadth;
    int height;

    public:
    virtual void input(){};
    virtual void Area()=0;
};
class Rectangle:public Polygon{
    public:
    Rectangle(){
        length=0;
        breadth=0;
        height=0;
    }
    void input(){
        cout<<"\n enter the length and breadth of rectangle ";
         cin>>length>>breadth;
    }
    void Area(){
         cout<<"\nArea of Rectangle= "<<length*breadth;
    }
};
class Triangle:public Polygon{
    private:
    int s;
    int area;
    public:
    Triangle(){
        length=0;             // length breadth height lai maile a ,b,c sides of triangle 
                              //jasari maneko
        breadth=0;
        height=0;
    }
    void input(){
        cout<<"\nenter the sides of the triangles ";
        cin>>length>>breadth>>height;
        s=(length+breadth+height)/2;

    }
     void Area(){
         area=sqrt(s*(s-length)*(s-breadth)*(s-height));
         cout<<"\narea of the triangle is "<<area;

    }
};
int main(){
    Polygon *p;
   Triangle T1;
   p=&T1;
   p->input();
   p->Area();
   Rectangle R1;
   p=&R1;
   p->input();
   p->Area();

return 0;
}