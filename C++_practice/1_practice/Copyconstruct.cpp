#include<iostream>
using std::cin;
using std::cout;

class student{
    int height;
    int weight;
    // char name[20];
   

   public:

   student(){
    cout<<"\nhello i am under the water:";
    cout<<"\n enter the height: ";
    cin>>height;
    cout<<"\n enter the weight: ";
    cin>>weight;
   }


//    student(int x,int y ){
//     height=x;
//     weight=y;
//     cout<<"\nsum is: "<<height+weight;

   
//    }

   student(student &k){         // copy cnstructor 1st step
    height=k.height;
    weight=k.weight;
    cout<<"\ndifference is: "<<height-weight;

   }

};

int main(){
    student s1;
    //s2(10,11);
    student s3(s1);    //copy constructor  2nd step

    return 0;
}



