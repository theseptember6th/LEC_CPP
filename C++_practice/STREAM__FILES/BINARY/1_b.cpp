// read the binary file using read() function


#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char name[25];
    float salary;
    ifstream infile;
    infile.open("employee.dat",ios::binary);
    infile.read(reinterpret_cast<char*>(name),sizeof(name));
    infile.read(reinterpret_cast<char*>(&salary),sizeof(salary));
    cout<<"Name: "<<name<<"\n";
    cout<<"Salary: "<<salary;

return 0;
}