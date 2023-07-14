/*Define a class Time with attributes hr,min and sec.Define different types of constructor
to initialize the object of time. default constructor should initialize the time with 12 hr,
0min and 0 sec. Parameterized constructor should initialize the time accordingly as the user 
inputs the time in seconds.(suppose user input time is 100 secs then constructor should 
initialize the object with 0 hr 1 min 40 secs .)Also define 2nd object of time to copy the value
of 1st object to new object using copy constructor.*/



#include<iostream>
using std::cin;
using std::cout;

class Time{
    int hr;
    int min;
    int sec;

    public:
    Time(){
        hr=12;
        min=0;
        sec=0;
    }
    Time(int hour,int minutes,int seconds){
          hr=hour;
          min=minutes;
          sec=seconds;
    }

    void timecalculation(int seconds){
        hr=seconds/3600;     //an hour has 3600 seconds
        seconds=seconds%3600;    //this will give remaining seconds after hour
        min=seconds/60;        // and remaining seconds is converted to minutes
        sec=seconds%60;    //and remaining seconds will be converted to seconds
    }
    void display(){
        cout<<" "<<hr<<":"<<min<<":"<<sec<<"\n";
    }


};
int main(){
    Time T1,T2(10,45,12);
    int s;
    cout<<"\nenter the seconds:";
    cin>>s;
    T1.timecalculation(s);
    T1.display();
   return 0;
}