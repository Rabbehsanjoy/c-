#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll,int cls,double gpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;

    }    
};
int main()
{
    Student rahim(29, 9, 4.5);
    cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa;
    return 0;
}