// class template 


#include<iostream>
using std::cin;
using std::cout;

template<class T>
class test{
      T marks;
      public:
      test(){
        marks=0;
      }
      test(T x){
        marks=x;
      }
      void display(){
        cout<<marks;
      }

};
// template<class T>
// class test{                 error cant make same class name
//       T result;
//       public:
//       test(){
//         result=0;
//       }
//       test(T x){
//         result=x;
//       }
//       void display(){
//         cout<<result;
//       }
      
// };
int main(){
     test<int>kristal;//class_name<data type>object_name;
     test<int>krista(3);
     test<int>krist(4.1);

return 0;
}