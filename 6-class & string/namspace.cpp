#include<bits/stdc++.h>
using namespace std;
namespace rakib
{
    int age=23;
    void fun()
    {
        cout<<"rakib namespace"<<endl;
    }
}
namespace sakib
{
    int age2=25;
    void tun()
    {
        cout<<"sakib namespace"<<endl;
    }
}
using namespace rakib;
using namespace sakib;
int main()
{
    cout<<age<<endl;
    cout<<age2<<endl;
    fun();
    tun();
    return 0;
}