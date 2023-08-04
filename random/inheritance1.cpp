//multilevel inheritance + private protected public access specifier



#include<iostream>
using std::cin;
using std::cout;

class parents{
 protected:
  int x;
  private:
  int y;
  public:
  int z;
      
};

class child:public parents{
    
};

class grandchild:public child{
    int z;
    public:
     void display(int w){
        z=w;                // derived class can acess public data from parents class
        cout<<z;
    }
    void displays(int w){
        x=w;                // derived class can acess protected data from parents class
        cout<<x;
    }
    void displayss(int w){
        y=w;              // error derived class cannot acess private data from parents class
        cout<<y;
    }
   
};
int main(){
    grandchild g1;
    g1.display(100);
    g1.displays(200);
    g1.displayss(300);    //error

return 0;
}