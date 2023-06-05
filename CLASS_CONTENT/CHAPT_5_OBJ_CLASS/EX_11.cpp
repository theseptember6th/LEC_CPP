// FRIEND CLASS
   // SHORTCUT TO MAKE ALL FUNCTION OF ONE CLASS TO FRIEND WITH ANOTHER CLASS 
#include<iostream>
using std::cin;
using std::cout;
class B;
class A{

    char passWord[10];
    public:
    
    void getdata(){
        cout<<"enter your password for class A\n";
        cin>>passWord;
    }
   
   friend class B;
   void display(B X);
//    void display( B X)                                        // THIS WILL BE ERROR AS
                                                                 // B IS NOT DEFINED PROPERLY
//    {
//     cout<<"the password of the class b is "<<B.passWOrd;
//    }

};

class B{
    char passWord[10];
    public:

    void getdata(){
        cout<<"enter your password for class B\n";
        cin>>passWord;
    }
    friend class A;
    void display(A Y)
    {
        cout<<"\n password of class A is "<<Y.passWord;
    }
};

void A:: display(B X){
    cout<<"\nthe password of the class B is "<<X.passWord;
}

int main(){
    class A a;
    class B b;
    a.getdata();
    b.getdata();
    b.display(a);
    a.display(b);
    return 0;
}
