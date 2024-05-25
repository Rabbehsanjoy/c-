#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int* a= new int[n];
    int* e= new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        e[i]=a[i];
    }
    
    delete[] a;
    for(int i=0;i<n;i++)
    {
        cout<<e[i]<<" ";
    }
    int m;
    cin>>m;
    int* b= new int[m];
    int* f=new int[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        f[i]=b[i];
    }
    delete[] b;
    b = new int[n+m];
    for(int i=0;i<(n+m);i++)
    {
        b[i] = e[i] + f[i];
    }
    for(int i=0;i<(n+m);i++)
    {
        cout<<b[i]<<" ";
    }
    
    
    return 0;
}