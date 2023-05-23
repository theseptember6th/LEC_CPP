#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
     cout<<"enter three numbers\n";
     cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
        cout<<a<<" is  the greatest number among the three";
        }
        else
        {

            cout<<c<<"is the greatest number among three";

        }   
    }
    else{
         b>c ? cout<<"\n"<<b<<" is greatest number among three" : cout<<"\n"<<c<<" is greatest among three ";
        // if(b>c)
        // {
        //     cout<<b<<"is the greatest number among the three";

        // }
        // else{
        //     cout<<c<<"is the greatest number among the three";
        // }
    }

    b>c ? cout<<"\n"<<b<<" is greater than" <<a : cout<<"\n"<<c<<" is greater than "<<c;
    
}