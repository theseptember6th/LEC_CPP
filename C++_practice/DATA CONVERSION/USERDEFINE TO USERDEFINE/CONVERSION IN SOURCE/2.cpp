//celsius to fahrenheit 
//celsius class(source)  to fahrenheit class (destination)
// CLASS F=clASS C
//CD=OS  
//CONVERSION IN DESTINATION

#include<iostream>
using std::cin;
using std::cout;
class celsius{
    float C;
    public:
    celsius(){
        C=0;
    }
    float return_C(){
        return C;
    }
    void input(){
        cout<<"enter celsius\n";
        cin>>C;
    }

};
class fahrenheit{
    float F;
    public:
    fahrenheit(){
        F=0;
    }
    fahrenheit(celsius c1){
        F=c1.return_C()*9/5+32;
    }
    void output(){
        cout<<"fahrenheit equivalence = "<<F<<"F";
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