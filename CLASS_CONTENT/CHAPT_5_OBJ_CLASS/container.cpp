#include<iostream>
using std::cin;
using std::cout;
 
 class a{
    public:
    int data;

    void getdata()
    {
        cout<<"enter the data\n";
        cin>>data;
    }

    void showdata()
    {
        cout<<"the value of data is "<<data<<"\n";

    }
   

 };

 class b{
    public:
    class a A;
    int b;
    void getdata()
    {
       
        cout<<"enter the value of b\n";
        cin>>b;
         A.getdata();
        
        

    }
    
    void showdata()
    {
        A.showdata();
        cout<<"the value of b is "<<b<<"\n";
    }

 };

 int main()
 {
    class b c3;
    c3.getdata();
    c3.showdata();
    return 0;

 }
