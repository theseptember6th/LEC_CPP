// A TYPICAL EXAMPLE OF CLASS

#include<iostream>
using std::cin;
using std::cout;

class simple{
    int data1;
    int data2;
    
    public:
    void setdata(int x,int y)
    {
        data1=x;
        data2=y;
    }

    void showdata()
    {
        cout<<"\n data1 = "<<data1<<"\n";
        cout<<"\n data 2 = "<<data2<<"\n";
    }
};

int main()
{
    simple s1,s2;
    s1.setdata(300,400);
    s2.setdata(20,30);
    s1.showdata();
    s2.showdata();
    
    return 0;
}