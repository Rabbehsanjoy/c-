#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cout<<s[2]<<endl;
    cout<<s.at(3)<<endl;
    cout<<s[(s.size()-1)]<<endl;
    cout<<s.back()<<endl;
    cout<<s.front()<<endl;
    return 0;
}