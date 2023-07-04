// simple example to illustrate all basic features taught till now of C++

#include<iostream>
using std::cin;
using std::cout;

class Vehicle{           //PARENT CLASS   OR BASE CLASS
    private:
    int size;          
    int weight;            //PRIVATE ATTRIBUTES
    int color;

    public:
    float fuel=25; // public attribute
    void look(){
        size=10;           //private attribute size can only be acessed by its own class member             
        cout<<"\n"<<size<<"meter"; //PROPERTY OF ENCAPSULATION
    }
    void brake(){                  //METHODS
        cout<<"\npressing the brake";
    }

    void accelerator_pedal(){
        cout<<"\n pressing the pedal and accelerating";
    }

    void vehicle_check(){
        cout<<"you are all good to goo";
    }

    void Area(double inch,double inch2){         //function overloading 1 POLYMORPHISM
        cout<<"\nprecise area in inch";
    }
    void Area(int meter,int meter2){         //function overloading 2 POLYMORPHISM
        cout<<"\n approx area in meter";
    }
    void Area(int radius){                   //function overloading 3 POLYMORPHISM
        cout<<"\n radius of tyre is";
    }
     void operator -(){                    //operator overloading  POLYMORPHISM
        fuel=-fuel;
    } 

};
class motorcycle:public Vehicle{  //1st CHILD CLASS OR DERIVED CLASS
    private:
    int engine_number=20012455; 
    public:        
      void petrol_engine(){
            cout<<"\n motorcycle has petrol engine";
      }
};
class Bus:public Vehicle{           //2nd CHILD CLASS OR DERIVED CLASS
    private:
    int engine_number=783283243; 
    public:          
    void diesel_engine(){
        cout<<"\n bus has diesel engine";
    }
};
int main(){
  Vehicle ferrari,lamborghini,nissan;   //OBJECTS OF PARENT CLASS VEHICLE

   ferrari.size;   /*error ..size attribute of class vehicle is private and inaccessible 
                     even by its own object.. PROPERTY OF ENCAPSULATION  */

  motorcycle duke,pulsar,discover;  // OBJECTS OF 1st child class

  duke.brake(); //PROPERTY OF INHERITANCE child can access property of its parent

  Bus saja_yatayat;                 //OBJECTS OF 2nd child class

saja_yatayat.accelerator_pedal();//PROPERTY OF INHERITANCE child can access property of its parent

  duke.size; /* *error even child class cannot acess parents private data
              INHERITANCE + ENCAPSULATION PROPERTY*/

  duke.vehicle_check(); /*CODE REUSABILITY PROPERTY you dont have to write checking vehicle code
                           again and again..vehicle is tested saving time and effort*/

   duke.Area(20);        /* function overloading invoking POLYMORPHISM */
   saja_yatayat.Area(100,200);
   pulsar.Area(50.5,75.5);

   -discover;   // operator overloading invoking POLYMORPHISM
   return 0;
}