// Namespaces Aliases i.e shortcut name for longer namespaces

#include<iostream>
using namespace std;

namespace lalitpurEngineeringCollege{
    int x=20;
}

namespace LEC=lalitpurEngineeringCollege;
//using namespace LEC;

int main(){
      cout<<LEC::x;
      LEC::x=100;// modifying data using shortcut lec
      cout<<"\n"<<LEC::x;
}
