// CELSIUS TO FAHRENHEIT AND VICE-VERSA

#include<iostream>
using std::cin;
using std::cout;

float CtoF(float C){
    float F;
    F=1.8*C+32;
    return F;
}

float FtoC(float F){
    float C;
    C=(F-32)/1.8;
    return C;
}

int main(){
    float C,F;
    int selection;
    do{
        cout<<"PRESS 1 to CONVERT CELSIUS TO FAHRENHEIT\n";
        cout<<"PRESS 2 to CONVERT FAHRENHEIT TO CELSIUS\n";
        cin>>selection;
        switch(selection){
          case 1:
             cout<<"enter the celsius to convert to Fahrenheit\n";
             cin>>C;
             F=CtoF(C);
             cout<<C<<"C"<<"="<<F<<"F"<<"\n";
            break;

          case 2:
             cout<<"enter the Fahrenheit to convert to Celsius\n";
             cin>>F;
             C=FtoC(F);
             cout<<F<<"F"<<"="<<C<<"C"<<"\n";
            break;
          
          default:
          cout<<"invalid digit\n";
          exit(-1);
        }
    }while(1);
   
   return 0;
}