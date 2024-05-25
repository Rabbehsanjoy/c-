#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char s;
    cin>>a>>s>>b;
    if( a > b)
    {
        if(s=='<')
        {
          cout<<"Wrong";  
        }
        else if(s=='=')
        {
            cout<<"Wrong";
        }
        else
        {
            cout<<"Right";
        }
    }
    else if(b>a)
    {
       if(s=='>')
        {
          cout<<"Wrong";  
        }
        else if(s=='=')
        {
            cout<<"Wrong";
        }
        else
        {
            cout<<"Right";
        } 
    }
    else
    {
        if(s=='<')
        {
            cout<<"Wrong";
        }
        else if(s=='>')
        {
            cout<<"Wrong";
        }
        else
        {
            cout<<"Right";
        }
    }
    
    return 0;
}