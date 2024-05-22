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
Student *fun()
{
    Student rahim(290, 12, 4.5);
    Student *p = &rahim;
    return p;
}
int main()
{
    // Student rahim(29, 9, 4.5);
    Student *ans=fun();
    // cout<<ans.roll<<" "<<ans.cls<<" "<<ans.gpa;
    cout<<ans->roll<<" "<<ans->cls<<" "<<ans->gpa;
    return 0;
}