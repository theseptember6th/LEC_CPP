// Nested namespace

#include<iostream>
using namespace std;
namespace outer{
    int num=100;
    //cout<<num;             // why cant cout this is error  why??
    void display(){
    cout<<num;              // but cout available if i make function
    }
    namespace inner{
        //num=10;              // this is error why?
        int num =10;              // forced to do this
        //cout<<num;
        void display(){
            cout<<num;
        }
    }
}

 using namespace outer::inner;

int main(){
    cout<<"\n"<<num; //inner ko num printed
    num=num+30;// modifying num of inner
     cout<<"\n"<<num;     // ye part haru ma maile directly num lekhna milyo because
                          //yo inner namespace ko nai ho vanera mathi vaneko xa


    using namespace outer;
    cout<<"\n"<<outer::num; //outer ko num printed
    outer::num=outer::num+100; //modifying outer ko num
    cout<<"\n"<<outer::num;  // tara ye part haru ma directly num lekhna milena becoz
                             // maile mathi using namespace outer::inner garesake..so inner
                    // ko ni huna sakcha ..but if maile mathi ko using namespace outer::inner
                    //nalekheko vaye..yesma ni directly num lekhna milthyo becoz inner namespace
                    //visible hudaina thyo...outer ko num matra visible hunthyo..
    return 0;
}