#include<iostream>
using namespace std;

template<class T1,class T2>
void testfunc(T1 a,T2 b){
    cout<<a<<" "<<b<<"\n";
}


int main(){
    int inum=5;
    float fnum=7.5;
    testfunc(inum,fnum);
    testfunc<int ,float>(inum,fnum);

    testfunc(20,"lets make this world a better place");
return 0;
}