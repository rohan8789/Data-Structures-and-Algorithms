#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(15);
    s.insert(20);
    s.insert(5);
    s.insert(10);
    for(auto it=s.begin(); it!=s.end(); it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    if(s.find(15)==s.end())
        cout<<"Not found"<<endl;
    else
        cout<<"found"<<" "<<*(s.find(15))<<endl;

    if(s.count(15)==0)
        cout<<"Not found"<<endl;
    else
        cout<<"found"<<endl;
return 0;
}