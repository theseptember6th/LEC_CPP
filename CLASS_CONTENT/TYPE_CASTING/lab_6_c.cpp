//define a class Design1 with data members code,qty and price and class Design2 with data member
//code and value.(Hint: code = code ,value =qty*price).Use the constructor in Design2 class to change
//the design1 type data to design2 type.your code should be able to execute the statement D2=D1
//(where D1 and D2 are objects of respective design class)


#include<iostream>
using std::cin;
using std::cout;
class Design1{   //  SOURCE CLASS
   int code;
  float price;
  float qty;
  public:
  Design1(){
    code=0;
    price=0;
    qty=0;
  }
  Design1(int x,float y,float z){
    code=x;
    price=y;
    qty=z;
  }
  int givecode(){         // giving code to design 2
    return code;
  }
  float givevalue(){       //giving value to design 2
    float value;
    value=price*qty;
    return value;
  }
  
};
class Design2{  //(C D) DESTINATION CLASS ,CONSTRUCTOR
    int code;
    float value;
    public:
    Design2(){
        code=0;
        value=0;
    }
    Design2(Design1 D1){
        code=D1.givecode();
        this->value=D1.givevalue();
        
    }
    void display(){
        cout<<"\n code= "<<code;
        cout<<"\n value= "<<value;
    }
};

int main(){
  Design1 D1(1212,20,2);
  Design2 D2;
  D2=D1;
  D2.display();
return 0;
}