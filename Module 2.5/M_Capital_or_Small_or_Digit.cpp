#include<bits/stdc++.h>
using namespace std;
int main()
{
    char n;
    cin>>n;
    if(n>='0' && n<='9')
    {
        cout<<"IS DIGIT";
    }
    else 
    {
        if(n>='a' && n<='z')
        {
            cout<<"ALPHA"<<endl<<"IS SMALL";
        }
        else
        {
            cout<<"ALPHA"<<endl<<"IS CAPITAL";
        }
    }
    return 0;
}