#include<iostream>
using std::cin;
using std::cout;

class Number{
   int a;

   public:

    //default constructor
   Number(){       

   }
   
   //paramaterized constructor
   Number(int z){
    a=z;

   }
    
   //copy constructor 
   Number(Number &obj){
    cout<<"\ncopy constructor is called!!!!\n";
    a=obj.a;

   }
   
   void display()
   {
    cout<<"the value is:"<<a<<"\n";
   }
};

int main()
{
    Number Defaults1,Parameterizeddd(10),Parameterizedd(20),Defaults2;

      //COPYING CONSTRUCTOR INVOKED
    Number kristal(Parameterizedd);
    kristal.display();
    Number lalitpur(Defaults1);
    lalitpur.display();

    // ANOTHER WAY IS
    Number KRISTAL=Parameterizeddd;
    KRISTAL.display();
    Number kathmandu(Defaults2);
    kathmandu.display();


    return 0;
}
