// defining member function of class template outside the class
// by the example of array maxm and minm problem

#include<iostream>
using std::cin;
using std::cout;
#define size 5
template<class T>
class Array{
    T arr[size];
    public:
    void input();
    T fmax();
    T fmin();
};
template<class T>   //need to mention everytime
T Array<T>::fmax(){
    T max;
    max=arr[0];
    for(int i=0;i<size;++i){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
template<class T>    //need to mention everytime
T Array<T>::fmin(){
    T min;
    min=arr[0];
    for(int i=0;i<size;++i){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
template<class T>
void Array<T>::input(){
   for(int i=0;i<size;i++){
      cin>>arr[i];
   }
}
int main(){
    Array<int>a1;
    a1.input();
    cout<<"\n minm: "<<a1.fmin();
    cout<<"\n maxm: "<<a1.fmax();
 
    Array<float>a2;
    a2.input();
    cout<<"\n minm: "<<a2.fmin();
    cout<<"\n maxm: "<<a2.fmax();
 

 //Array<char>a3;  //error char cant be compared with > operator...have to use strcmp or
  //overload that > operator
return 0;
}