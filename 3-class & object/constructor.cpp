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
    int n,p;
    double c;
    cin>>n>>p>>c;
    Student rahim(n,p,c);
    cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa;
    return 0;
}