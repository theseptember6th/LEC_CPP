#include <iostream>
using namespace std;
class Parent{
protected:
int id_protected ;
};
class Child :public Parent {
    public:
    void setID(int id)
    {
        id_protected=id;
    }
    void display()
    {
    cout<<"id_protected is : "<<id_protected<<endl;
    }

};
int main(){
    Child c1;
    c1.setID(5);
    c1.display();
}