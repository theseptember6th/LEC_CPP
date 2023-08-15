#include<iostream>
using namespace std;
#include"first.h"
#include"second.h"
int main(){
    first::display(); // to solve such problem ...make namespace in those files...and now 
                      // we can specify which display function of which file we want to use..
    return 0;
}