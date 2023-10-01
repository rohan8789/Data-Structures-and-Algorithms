#include<bits/stdc++.h>
using namespace std;

void topologicalsort(vector<int> v[], int sv, bool *visited, stack<int> &s)
{
    visited[sv]=true;
    for(int i:v[sv])
    {
        if(!visited[i])
        {
            topologicalsort(v, i, visited, s);
        }
    }
    s.push(sv);
}

void sort(vector<int> v[], int n)
{
    stack<int> s;
    bool * visited = new bool[n];
    for(int i=0; i<n; i++)
    {
        visited[i]=false;
    }

    for(int i=0; i<n; i++)
    {
        if(!visited[i])
        {
            topologicalsort(v, i, visited, s);
        }
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main()
{
    int n, e;
    cin>>n>>e;
    vector<int> v[n];
    for(int i=0; i<e; i++)
    {
        int f,s;
        cin>>f>>s;
        v[f].push_back(s);
    }

    sort(v, n);
return 0;
}