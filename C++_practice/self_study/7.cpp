// Inline function simple wala
#include<iostream>
using namespace std;

inline int& max(int &a,int &b){
    
    return(a>b?a:b);
}
inline int& min(int &a,int &b){
    return(a<b?a:b);
}

int main(){
    int x=10,y=5;
    cout<<" greater is "<<max(x,y)<<" than "<<min(x,y)<<"";


}