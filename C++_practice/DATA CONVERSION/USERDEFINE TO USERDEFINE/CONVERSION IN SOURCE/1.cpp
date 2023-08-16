//celsius to fahrenheit 
//celsius class(source)  to fahrenheit class (destination)
// CLASS F=clASS C
//CD=OS

#include<iostream>
using std::cin;
using std::cout;
class fahrenheit{
    float F;
    public:
    fahrenheit(){
        F=0;
    }
    fahrenheit(float x){
        F=x;
    }
    void output(){
        cout<<"fahrenheit equivalence = "<<F<<"F";
    }
};
class celsius{
    float C;
    public:
    celsius(){
        C=0;
    }
    operator fahrenheit(){
      
       float F1=9*C/5+32;
       return fahrenheit(F1);
    }
    void input(){
        cout<<"enter celsius\n";
        cin>>C;
    }

};
int main(){
  celsius c1;
  fahrenheit f1;
  c1.input();
  f1=c1;
  f1.output();
return 0;
}