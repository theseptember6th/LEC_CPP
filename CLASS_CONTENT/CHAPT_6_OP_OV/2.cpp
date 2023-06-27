//unary operator
//postfix and prefix


#include<iostream>
using std::cin;
using std::cout;

class KRISTAL{
    int count=0;
    public:
   int operator ++(int){   // for  postfix i++
     return count++;
   }
   void operator ++(){        // for prefix; ++i
    ++count;
   }
   void display(){
    cout<<"\n count = "<<count;
   }


};
int main(){
    KRISTAL k1;
     k1.display();
     cout<<k1++;
     ++k1;
    k1.display();
return 0;
}