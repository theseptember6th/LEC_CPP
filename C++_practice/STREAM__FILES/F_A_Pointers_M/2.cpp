//seekp()
#include<iostream>
#include<fstream>
using namespace std;
int main(){
   ofstream outfile;
   outfile.open("kristal.doc");
   outfile.seekp(15);
   outfile<<"**";
   outfile.seekp(-5,ios::cur);
   outfile<<'#';
return 0;
}

