#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class student {
    char name[20];
    int marks;

public:
    int getmarks() {
        return marks;
    }
    void inputdata() {
        cout << "\n enter name: ";
        cin>>name; 
        cout << "\n enter marks: ";
        cin >> marks;
    }
    void display() {
        cout << "\nName: " << name;
        cout << "\nmarks: " << marks;
    }
};

int main() {
    cout << "\nenter the no. of records to add: ";
    int n;
    cin >> n;
    student* s = new student[n]; // Dynamically allocate an array

    fstream file;
    file.open("normal.txt", ios::in | ios::out | ios::binary);

    for (int i = 0; i < n; i++) {
        s[i].inputdata();
        file.write(reinterpret_cast<char*>(&s[i]), sizeof(s[i]));
    }
    file.seekg(0, ios::beg);

    student temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((s[i].getmarks()) < (s[j].getmarks())) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    cout << "\nSorted Data in Descending Order:\n";
    for (int i = 0; i < n; i++) {
        s[i].display();
    }

    file.close();
    delete[] s; // Deallocate memory
    return 0;
    }
    




