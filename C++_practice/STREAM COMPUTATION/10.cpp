// Yes argument userdefined manipulator


#include<iostream>
using namespace std;

class TestManipulator{
    int n;
    public:
    TestManipulator():n(0){};
    TestManipulator(int x):n(x){};
    friend ostream& operator << (ostream&,TestManipulator t ); //analyze why i didnt make it
                                                   //test manipulator as reference obj
};
//overloading extraction operator
ostream& operator << (ostream& os,TestManipulator t){
          for(int i=0;i<t.n;i++){
            os<<'\t';           // os object is cout object
          }
          return os;
}

//defining manipulator
TestManipulator tb(int a){
       return TestManipulator(a);
    
}

int main(){
    int a=1,b=2,c=3,d=4;
    cout<<a<<tb(1)<<b<<tb(2)<<c<<tb(3)<<d;
return 0;
}