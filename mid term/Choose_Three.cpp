#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n,s;
        cin>>n>>s;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int flag=0;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int l=j+1;l<n;l++)
                {
                    if(a[i]+a[j]+a[l]==s)
                    {
                        flag++;
                    }

                }
            }
        }
        
        if(flag>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }                                    
    }
    return 0;
}