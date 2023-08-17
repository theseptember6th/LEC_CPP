//time  cout <<t mking it possible
#include<iostream>
using namespace std;

class time{
    int hr;
    int sec;
    int min;
    public:
    time(int x ,int y, int z){
        hr=x;
        sec=y;
        min=z;
    }

    friend ostream& operator <<(ostream&,time&);
 

};

 ostream& operator <<(ostream&a,time&t){
     a<<t.hr<<":"<<t.min<<":"<<t.sec;
     return a;
 }
int main(){
  time t1(2,3,4);
  cout<<t1;
return 0;
}