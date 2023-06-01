#include <iostream>
using std::cin;
using std::cout;

class student{
    public:
    double marks;
    student(double x){
        marks=x;
    }
};

void CalculateAverage(student s1,student s2)
{
    double average;
    average=(s1.marks+s2.marks)/2;
    cout<<"the average marks is "<<average<<"\n";
}

int main()
{
    class student s3(100),s4(200);
    CalculateAverage(s3,s4);
    return 0;

}


