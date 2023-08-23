// specialization of function template


#include<iostream>
#include<cstring>
using std::cin;
using std::cout;
template<class T>
bool test(T a, T b){
    return a>b;
}
template<>      //specialization
bool test(char* a,char* b){     //there are other formats also.... but i feel this as simplest
    return strcmp(a,b)>0;
}
int main(){
    int a=2,b=3;
    cout<<" "<<test(a,b);
    char str1[]="kristal";
    char str2[]="shrestha";
    cout<<" "<<test(str1,str2);      //calls specialized version
return 0;
}