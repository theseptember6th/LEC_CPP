//time  cout <<t mking it possible
#include<iostream>
using namespace std;

class time{
    int hr;
    int sec;
    int min;
    public:
    time(){
        hr=0;
        sec=0;
        min=0;
    }
    time(int x ,int y, int z){
        hr=x;
        sec=y;
        min=z;
    }

    friend ostream& operator <<(ostream&,time&);
    friend istream& operator >>(istream&,time&);
 

};

 ostream& operator <<(ostream&a,time&t){
     a<<t.hr<<":"<<t.min<<":"<<t.sec;
     return a;
 }
 istream& operator >>(istream&a,time&t){
    a>>t.hr>>t.min>>t.sec;
    return a;
 }
int main(){
  time t1;
  cin>>t1;
  cout<<t1;
return 0;
}