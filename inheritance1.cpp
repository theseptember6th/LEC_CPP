//multilevel inheritance



#include<iostream>
using std::cin;
using std::cout;

class parents{
 protected:
  int x;

};

class child:public parents{
    
};

class grandchild:public child{
    int z;
    public:
    void display(int w){
        x=w;
        cout<<x;
    }
};
int main(){
    grandchild g1;
    g1.display(100);

return 0;
}