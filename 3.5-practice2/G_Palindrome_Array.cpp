#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int flag=1;
    // int i=0,j=strlen(a[n-i-1]);
    // while(i<j)
    // {
    //     if(a[i]!=a[j])
    //     {
    //         flag=0;
    //     }
    //     i++;
    //     j--;
    // }
    for(int i=0;i<=n/2 && n!=0;i++)
    {
        
        if(a[i] != a[n-i-1])
        {
            flag=0;
            break;
        }
        
    }
    if(flag=0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}