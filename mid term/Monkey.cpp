#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100000+5];
    while(cin.getline(s,100000+5))
    {
        sort(s,s+strlen(s));
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]==' ')
            {
                continue;
            }
            else
            {
                cout<<s[i];
            }

        }
        
        cout<<endl;
    }
    return 0;
}