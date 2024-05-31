#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s="hello";
    // // cout<<s.size()<<endl;
    // // cout<<s.max_size()<<endl;
    // // s.clear();
    // cout<<s<<endl;
    // if(s.empty()==true) cout<<"empty"<<endl;
    // else cout<<"not empty"<<endl;
    string s;
    getline(cin,s);
    s.resize(5);
    s.resize(8,'x');
    cout<<s<<endl;

    return 0;
}