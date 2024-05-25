#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    int v1=a+b;
    int v2=a-b;
    int v3=a*b;
    if(s=='+')
    {
        if(a+b!=c)
        {
            cout<<v1;
        }
        else
        {
            cout<<"Yes";
        }
    }
    else if(s=='-')
    {
       if(a-b!=c)
        {
            cout<<v2;
        }
        else
        {
            cout<<"Yes";
        } 
    }
    else if(s=='*')
    {
       if(a*b!=c)
        {
            cout<<v3;
        }
        else
        {
            cout<<"Yes";
        }  
    }
    return 0;
}