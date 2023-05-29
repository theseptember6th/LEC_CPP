// A MORE PRACTICAL EXAMPLE OF CLASS

#include<iostream>
using std::cin;
using std::cout;

class iteminfo{
   
   int itemid;
   float cost;

   public:

   void getdata(int x,float y)
   {
    itemid=x;
    cost=y;
   }

   void showdata()
   {
    cout<<"\nITEM ID: "<<itemid;
    cout<<"\n COST: "<<cost;
   }

};

int main()
{
    iteminfo i1,i2;
    i1.getdata(10909,20);
    i2.getdata(18878,40);
    cout<<"INFOS OF 1ST ITEM:\n";
    i1.showdata();
    cout<<"\n\nINFOS OF 2ND ITEM:\n";
     i2.showdata();
     return 0;
}