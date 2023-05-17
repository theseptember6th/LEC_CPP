#include <iostream>
using namespace std;
class Room{
    public:
    int length;
    int breadth;
    int height;

    double calculateArea(int x,int y){
        length=x;
        breadth=y;
        return length*breadth;

    }

    double calculateVolume(int x,int y,int z){
        length=x;
        breadth=y;
        height=z;
        return length*breadth*height;
    }

};

int main()
{
    class Room r1,r2;
    int l,b,h;
    cout<<"enter the value of length breadth and height of the room";
    cin>>l>>b>>h;

    // directly displaying without storing variable

    // cout<<"the area of the room is:"<<r1.calculateArea(l,b)<<"\n";
    // cout<<"the volume of the room is:"<<r1.calculateVolume(l,b,h);



    // storing value and then displaying it

    double area=r1.calculateArea(l,b);
    cout<<"the area of the room is:"<<area<<"\n";
    double volume=r1.calculateVolume(l,b,h);
    cout<<"the volume of the room is:"<<volume<<"\n";

}