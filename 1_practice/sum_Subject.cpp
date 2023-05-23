#include<iostream>
using namespace std;
int main()
{
    string subject[]={"OOP","TOC","ECT","EDC","DL","EM","MATH"};
    int marks[7];
    int i;
    for(i=0;i<sizeof(marks)/sizeof(marks[0]);i++)
    {
        cout<<"enter the marks for "<<subject[i]<<"\n";
        cin>>marks[i];
    }
    int sum=0;
   
   for(i=0;i<6;i++)
   {
    sum=sum+marks[i];
   }
   cout<<"the total marks is "<<sum;
}      
//THE END