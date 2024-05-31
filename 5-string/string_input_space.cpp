#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    // cin.ignore();
    getchar();
    string s;
    // cin>>s; //didnt work
    // cin.getline(s,100); //char s[100];didnt work
    getline(cin,s);
    cout<<x<<endl;
    cout<<s<<endl;
    // cout<<s.size()<<endl;
    return 0;
}