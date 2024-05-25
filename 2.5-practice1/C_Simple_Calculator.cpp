#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y;
    cin>>x>>y;
    int sum=x+y;
    long long int multi = x*y;
    int min=x-y;
    cout<<x<<" "<<"+"<<" " <<y<<" "<<"="<<" "<<sum<<endl;
    cout<<x<<" "<<"*"<<" " <<y<<" "<<"="<<" "<<multi<<endl;
    cout<<x<<" "<<"-"<<" " <<y<<" "<<"="<<" "<<min<<endl;
    return 0;
}