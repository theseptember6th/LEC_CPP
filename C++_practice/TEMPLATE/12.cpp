//EXPLICIT CLASS SPECIALIZATION
// WE cant overload the class template so 
// we need to create special version for specific data type if that data type is not
// appropriate for  given class template
#include<iostream>
#include<cstring>
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

// above template is not possible for string and char ....so we are making specialized version
//for it..

  template<>
  class Array<char *>{
       char* arr[size];
       public:
       void input();
      char* fmax();
      char* fmin();
  };
  void Array<char*>::input(){
    {                              // defining member func of specialized class outside
        for(int i=0;i<size;i++){
            arr[i]=new char[sizeof(char)];
            cin>>arr[i];
        }
       }
  }
  char* Array<char*>::fmax(){       //defining member funcn of specialized class outside
         char* max=arr[0];
        for(int i=1;i<size;++i){
            if(strcmp(arr[i],max)>0){
                   max=arr[i];
            }
        }
        return max;
  }
  char* Array<char*>::fmin(){
    char* min=arr[0];
    for(int i=0;i<size;i++){
        if(strcmp(arr[i],min)<0){
             min=arr[i];
        }
    }
    return min;
  }

int main(){
    // Array<int>a1;
    // a1.input();
    // cout<<"\n minm: "<<a1.fmin();
    // cout<<"\n maxm: "<<a1.fmax();
 
    // Array<float>a2;
    // a2.input();
    // cout<<"\n minm: "<<a2.fmin();
    // cout<<"\n maxm: "<<a2.fmax();
 
    Array<char *>a3;
    a3.input();
    cout<<"\n minm: "<<a3.fmin();
    cout<<"\n maxm: "<<a3.fmax();
 
    
 
return 0;
}