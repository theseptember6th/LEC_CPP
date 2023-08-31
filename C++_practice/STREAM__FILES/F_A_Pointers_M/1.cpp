// seekg()

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char k;
    ifstream infile;
    infile.open("employee.dat",ios::binary);
    infile.seekg(5);
    infile.read(&k,sizeof(k));
    cout<<k;
    infile.seekg(-3,ios::cur);
    infile.read(&k,sizeof(k));
    cout<<k;


return 0;
}