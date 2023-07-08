//a good logic here
#include<iostream>
using std::cin;
using std::cout;

class parents{
  public:
  void display(){
       cout<<"you are using parents class function\n";
  }

};

class child:public parents{
    public:
    void display(){
        cout<<"you are using derived class function\n";
    }
};
int main(){
      parents *x;
     child y;
     x=&y;
     x->display();
return 0;
}