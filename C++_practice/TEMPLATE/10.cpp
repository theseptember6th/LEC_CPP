// defining member function of class template outside the class + non template argument
// by the example of array maxm and minm problem           .

#include<iostream>
using std::cin;
using std::cout;
template<class T,int size>   //size as non template argument
class Array{
    T arr[size];
    public:
    void input();
    T fmax();
    T fmin();
};
template<class T,int size>   //need to mention everytime
T Array<T,size>::fmax(){
    T max;
    max=arr[0];
    for(int i=0;i<size;++i){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
template<class T,int size>    //need to mention everytime
T Array<T,size>::fmin(){
    T min;
    min=arr[0];
    for(int i=0;i<size;++i){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
template<class T,int size>
void Array<T,size>::input(){
   for(int i=0;i<size;i++){
      cin>>arr[i];
   }
}
int main(){
    Array<int,5>a1;
    a1.input();
    cout<<"\n minm: "<<a1.fmin();
    cout<<"\n maxm: "<<a1.fmax();
 
    Array<float,6>a2;
    a2.input();
    cout<<"\n minm: "<<a2.fmin();
    cout<<"\n maxm: "<<a2.fmax();
 

 //Array<char>a3;  //error char cant be compared with > operator...have to use strcmp or
  //overload that > operator
return 0;
}