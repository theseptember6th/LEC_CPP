#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Student
{
    string name, address;
    int id;

public:
    void getDetails()
    {
        cout << "Enter name:" << endl;
        getline(cin, name);
        cout << "Enter Address:" << endl;
        getline(cin, address);
        cout << "Enter id:" << endl;
        cin >> id;
    }

    void showDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Id: " << id << endl;
    }
    void writeToFile()
    {
        ofstream oFile("student.dat");
        oFile.write((char *)&*this, sizeof(*this));
        oFile.close();
    }
    void readFromFile()
    {
        ifstream iFile("student.dat");
        iFile.read((char *)&*this, sizeof(*this));
        iFile.close();
    }
};

int main()
{
    system("cls");
    Student s1;
    //s1.getDetails();
     //s1.writeToFile();
     s1.readFromFile();
    s1.showDetails();
}