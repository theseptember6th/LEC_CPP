#include<iostream>
using std::cin;
using std::cout;
int main(){
   float x=-1;
   cout<<"Before try\n";
    try{
        cout<<"Inside try\n";
        if(x<0){
            throw x;
            cout<<"after throw\n";
        }
    }
    catch (int x){
        cout<<"Exception Caught. Int type\n";
    }
    catch (float x){
        cout<<"Exception caught. float type\n";
    }
    cout<<"after catch\n";
return 0;
}