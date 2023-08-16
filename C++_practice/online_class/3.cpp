#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char data[100];
    
    ofstream outfile;
    outfile.open("secondfile.txt");
    cout<<"writing to the file\n";
    cout<<"enter your name\n";
    cin.getline(data,100);
    outfile<<data<<"\n";
    outfile.close();

    ifstream infile;
    infile.open("secondfile.txt");
    cout<<"reading from the file\n";
    infile>>data;
    cout<<data<<"\n";
    infile>>data;
    cout<<data<<"\n";
    infile.close();

return 0;
}