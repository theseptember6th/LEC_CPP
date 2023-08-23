// Overloading with functions 

// NEED OF NORMAL FUNCTION EVENTHOUGH WE HAVE FUNCTION TEMPLATE


#include<iostream>
#include<cstring>
using std::cin;
using std::cout;

template <class T>
T fmax(T a,T b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
char * fmax(char *a,char* b){
    char *result;
    if(strcmp(a,b)>0){
            result=a;
    }
    else{
        result=b;
    }
    return result;
}
int main(){
    int x= 10;
    int y= 20;
    cout<<" "<<fmax(x,y);
    char a='a';
    char b='z';
    cout<<" "<<fmax(a,b);

return 0;
}