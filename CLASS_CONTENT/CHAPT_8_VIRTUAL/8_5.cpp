//Array of pointers to base class


#include<iostream>
using std::cin;
using std::cout;

class Point{
    public:
     virtual void draw(){
        cout<<"Point\n";

     }
};

class Line:public Point{
    public:
      void draw(){
        cout<<"Line\n";
      }
};
class Triangle:public Point{
     public:
      void draw(){
        cout<<"triangle\n ";
      }
};
class Polygon:public Point{
    public:
     void draw(){
        cout<<"Polygon\n";
     }
};
class Circle:public Point{
    public:
      void draw(){
        cout<<"circle\n";
      }
};
int main(){
    Point pt;
    Line Ln;
    Triangle tr;
    Polygon py;
    Circle cr;
    Point *baseptr[]={&pt,&Ln,&tr,&py,&cr};
    cout<<"Figure drawn by base pointer are:\n";
    for(int i=0;i<5;i++){
        baseptr[i]->draw();
    }
return 0;
}