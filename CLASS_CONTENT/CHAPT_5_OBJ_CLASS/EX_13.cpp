// FRIEND CLASS


#include<iostream>
using std::cin;
using std::cout;
class B;
class A{
    private:
      char passA[20];
    public:
    void getdata(){
        cout<<"\n enter the password of A: ";
        cin>>passA;
    }
    void showdata(B);
    friend class B;
};
class B{
    private:
      char passB[20];
    public:
    void getdata(){
        cout<<"\n enter the password of A: ";
        cin>>passB;
    }
    void showdata(A);
    friend class A;     
};
void A::showdata(B b){
    cout<<"\n B's password is "<<b.passB;
}
int main(){
    A a;
    B b;
    a.getdata();
    b.getdata();
    a.showdata(b);
    b.showdata(a);
    return 0;
}


