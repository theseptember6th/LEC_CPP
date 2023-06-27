#include<iostream>
using std::cin;
using std::cout;
class sample{
    
    friend double mean(sample s);// sample s kina gareko vanda kheri chai ...
                                 // attribute acess garna object ko help chahenxa..
    private:
    float x;
    float y;
    public:
    void getdata();

};
void sample::getdata(){
    cout<<"\nenter x: ";
    cin>>x;
    cout<<"\nenter y: ";
    cin>>y;
}

double mean(sample s){
    double Mean;
    Mean=(s.x+s.y)/2;
    return Mean;
}

int main(){
    sample s1;
    s1.getdata();
    cout<<"\nthe mean is: "<<mean(s1);
    return 0;
};