#include <iostream>
using namespace std;
class room{
    int length;
    int breadth;
    int height;
    public:
    void inputs()
    {
        cout<<"enter length\n";
        cin>>length;
        cout<<"enter breadth\n";
        cin>>breadth;
        cout<<"enter height\n ";
        cin>>height;
    }
    void CALCULATE_AREA()
    { 
        cout<<length*breadth<<"is the required area \n";
    }
    void CALCULATE_VOLUME()
    {
        cout<<length*breadth*height<<"is the required volume";
    }
};
int main()
{
    class room x,y,z;
    x.inputs();
    x.CALCULATE_AREA();
    x.CALCULATE_VOLUME();
    return 0;
}