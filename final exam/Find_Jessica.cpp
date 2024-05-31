#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int cnt=0;
    while(ss>>word)
    {
        if(word=="Jessica")
        {
            cnt++;
        }
        
    }
    if(cnt>0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}