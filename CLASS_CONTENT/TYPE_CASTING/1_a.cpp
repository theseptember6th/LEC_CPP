//BASIC to class type conversions
#include<iostream>
using std::cin;
using std::cout;

class TIME{
    int hr;
    int min;
    int sec;
    public:
    void operator = (int seconds){
        cout<<"BASIC to class type conversions\n";
        hr=seconds/3600;     
        seconds=seconds%3600;
        min=seconds/60;        
        sec=seconds%60;    
    }

    void display(){
        cout<<hr<<":"<<min<<":"<<sec;
        
    }


};
int main(){
    int s;
    cout<<"Enter the seconds\n";
    cin>>s;
    TIME T1;
    T1=s;
    T1.display();
    return 0;
}