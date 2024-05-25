#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char section[5];
    int marks;
    
};
int main()
{
    int t;
    cin>>t;
    for(int x=0;x<t;x++)
    {
        Student s,r,a;
        cin>>s.id>>s.name>>s.section>>s.marks;
        getchar();
        cin>>r.id>>r.name>>r.section>>r.marks;
        getchar();
        cin>>a.id>>a.name>>a.section>>a.marks;
        getchar();
        if(s.marks>=r.marks && s.marks>=a.marks)
        {
            if(s.marks==r.marks)
            {
                if(s.id<r.id)
                {
                    cout<<s.id<<" "<<s.name<<" "<<s.section<<" "<<s.marks<<endl;
                }
                else
                {
                    cout<<r.id<<" "<<r.name<<" "<<r.section<<" "<<r.marks<<endl;
                }
            }
            else if(s.marks==a.marks)
            {
               if(s.id<a.id)
                {
                    cout<<s.id<<" "<<s.name<<" "<<s.section<<" "<<s.marks<<endl;
                }
                else
                {
                    cout<<a.id<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
                } 
            }
            else
            {
                cout<<s.id<<" "<<s.name<<" "<<s.section<<" "<<s.marks<<endl;
            }
        }
        else if(r.marks>=a.marks)
        {
            if(r.marks==a.marks)
            {
                if(r.id<a.id)
                {
                    cout<<r.id<<" "<<r.name<<" "<<r.section<<" "<<r.marks<<endl;
                }
                else
                {
                    cout<<a.id<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
                }
            }
            else
            {
                cout<<r.id<<" "<<r.name<<" "<<r.section<<" "<<r.marks<<endl;
            }
        }
        else
        {
            cout<<a.id<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
        }
    }
    return 0;
}