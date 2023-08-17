//sqrt of negative number
#include<iostream>
#include<cmath>
using std::cin;
using std::cout;

class number{
     int num;
    public:
    class NEG{};
    void input(){
        cout<<"enter num\n";
        cin>>num;
    }
    double squareroot(){
        if(num<0){
            throw NEG();
        }
        else{
              return(sqrt(num));
        }
    }


};
int main(){
    number n1;
    n1.input();
    try{
        float result;
        result=n1.squareroot();
        cout<<result;
    }
    catch(number::NEG){
        cout<<"Negative number\n";
    }
return 0;
}