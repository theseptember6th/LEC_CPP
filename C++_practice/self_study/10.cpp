// friend class

#include<iostream>
using std::cin;
using std::cout;
class shrestha;
class kristal{
    char password[20];
    public:
    void inputdata(){
        cout<<"\nEnter PW: ";
        cin>>password;
    }
    void display(shrestha s);
    friend class shrestha;
};
class shrestha{
    char password[20];
    public:
      void inputdata(){
        cout<<"\nEnter PW: ";
        cin>>password;
    }
    void display(kristal k){
        cout<<"\nthe password of kristal is "<<k.password;
    }
    friend class kristal;
};
void kristal::display(shrestha s){
  cout<<"\nthe password of shrestha is "<<s.password;  
};
int main(){
  kristal k1;
  shrestha s1;
  k1.inputdata();
  s1.inputdata();
  k1.display(s1);
  s1.display(k1);
return 0;
}