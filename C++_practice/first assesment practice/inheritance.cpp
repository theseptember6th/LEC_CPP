#include<iostream>
using std::cin;
using std::cout;
class A;
class parents{
    private:
    int salary;
    protected:
    int id_protected;
    //friend class A;
};
class child:public parents{
    public:
    void setid(int id){
        id_protected=id;
    }
   /* void outputs(int x){
        salary=x;               // private of parents cannot be acessed even by child
    } */
    // void outputss(A a,int x){
    //     a.salary=x;                you cant mix friend and inheritance property
    //     cout<<a.salary;
    // } 
    void display(){
        cout<<id_protected;
        
    }
};
int main(){
    //parents p1; yo parents na lekhe pani class child invoke hunxa becoz child vetra parents ko sabai hunxa
    //p1.id_protected=4;  you cant access this
    // A kristal;
    child c1;
    //c1.outputss(kristal,2000);
    c1.setid(10);
    c1.display();
return 0;
}