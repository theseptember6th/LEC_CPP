//OBJECT POINTER

#include<iostream>
using std::cin;
using std::cout;

class Kristal{
    char name[20];
    int roll;

    public:
    void getdata(){
        cout<<"\n enter your name: ";
        cin>>name;
        cout<<"\n enter the roll: ";
        cin>>roll;
    }

   void showdata(){
      cout<<"\n NAME: "<<name;
      cout<<"\n ROLL: "<<roll;

   }

};

int main(){
  Kristal *k1;
  Kristal k2;
  k1=&k2;
  k1->getdata();
  k1->showdata();
  return 0;
}


