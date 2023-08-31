// use of put() in 
//writing

#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
    fstream file;
    file.open("name_list.txt",ios::out);
    char name[25],email[25];
    cout<<"enter name\n";
    cin>>name;
    cout<<"enter email\n";
    cin>>email;
    for(int i=0;i<strlen(name);i++){
        file.put(name[i]);
    }
    file.put('\n');
    for(int i=0;i<strlen(email);i++){
        file.put(email[i]);
    }
    return 0;

return 0;
}