#include<bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    // Person(string nm,int ag)
    // {
    //     name = nm;
    //     age =ag;
    // }    
};
int main()
{
    string name;
    getline(cin,name);

    int age;
    cin>>age;

    Person Joy(name,age);
    cout<<joy.name<<" "<<joy.age<<endl;
    return 0;
}