#include<bits/stdc++.h>
using namespace std;

void print(stack<int> &s)
{
    if(s.empty())
        return;
    int y = s.top();
    s.pop();
    cout<<y<<" ";
    print(s);

    s.push(y);
    
}

int main()
{
    stack<int> s;
    int n;
    cin>>n;
    while(n!=-1)
    {
        s.push(n);
        cin>>n;
    }
    print(s);
    
return 0;
}