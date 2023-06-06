#include <iostream>
using std::cin;
using std::cout;

class Vehicle{
    private:
    int platenumber;

    public:
    int getnumber(int x){
        platenumber=x;                    // TRICK TO FOOL COMPILER
        return platenumber;
    }

};
int main(){
      Vehicle s1;
      cout<<"\nthe plate number is :\t"<<s1.getnumber(3000);
    return 0;
}