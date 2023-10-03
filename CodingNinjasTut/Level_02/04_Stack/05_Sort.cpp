#include<bits/stdc++.h>
using namespace std;

void InsertBottom(stack<int> &s, int y)
{
    // cout<<s.size()<<" "<<y<<endl;
    if(s.empty() || y>s.top())
        s.push(y);
    
    int temp = s.top();
    s.pop();

    InsertBottom(s, y);

    s.push(temp);
}

void sort(stack<int> &s)
{
    if(s.size()==0)
        return;

    int y = s.top();
    s.pop();

    sort(s);
    InsertBottom(s, y);
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
    sort(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
return 0;
}