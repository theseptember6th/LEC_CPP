// write to a binary file using write()function

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char name[25];
    float salary;
    ofstream outfile;
    outfile.open("employee.dat",ios::binary);
    cout<<"enter the name\n";
    cin>>name;
    cout<<"enter the salary\n";
    cin>>salary;
    outfile.write(reinterpret_cast<char*>(name),sizeof(name));
    outfile.write(reinterpret_cast<char*>(&salary),sizeof(salary));
return 0;
}
