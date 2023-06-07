#include<iostream>
using std::cin;
using std::cout;

class student{
    int height;
    int length;
    int breadth;

    public:
   
    student(){
        height=0;
        length=0;
        breadth=0;

        cout<<"\nlength = "<<length;

    }

    student(int x, int y ){
        
        cout<<"\nthe area of the rectangle is: "<<x*y;
    }

    student(int x,int y, int z ){
        cout<<"\n the volume of the cube is: "<<x*y*z;
    }

};

int main(){
    int x,y,z;
    cout<<"enter the value of length breadth height ";
    cin>>x>>y>>z;
  student point,rectangle(x,y),cube(x,y,z);


    return 0;
}