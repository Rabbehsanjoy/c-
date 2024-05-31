#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string nm;
    int cls;
    string s;
    int id;
};
int main()
{
    int n;
    cin>>n;

    student*a=new student[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id;
    }
    // for(int i=0;i<n/2;i++)
    // {
    //     for(int j=n-1;j>=n/2;j--)
    //     {
    //         swap(a[i].s,a[j].s);
    //     }
    // }
    for(int i=0;i<n/2;i++)
    {
        swap(a[i].s,a[n-i-1].s);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<endl;
    }
    
    return 0;
}