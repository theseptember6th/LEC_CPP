#include <iostream>
using namespace std;
class student{
    int percentage;
    char name[20];
    public:
    void self_discipline(){
        cout<<"Enter the name";
        cin>>name;
    }
    void punctuality(){
        cout<<"Enter  percentage in punctuality";
        cin>>percentage;
    }
    void display(){
        cout<<name;
        cout<<percentage;
    }  
};
int main(){
    class student sushil,kristal;
    sushil.self_discipline();
    sushil.punctuality();
    sushil.display();
    return 0;
}
