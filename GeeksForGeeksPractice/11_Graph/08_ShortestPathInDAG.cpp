#include<bits/stdc++.h>
using namespace std;

void topologicalSort(vector<pair<int,int> >v[], int sv, bool *visited, stack<int> &s)
{
    visited[sv]=true;
    for(auto it:v[sv])
    {
        if(!visited[it.first])
        {
            topologicalSort(v, it.first, visited, s);
        }
    }
    s.push(sv);
}

void shortest(vector<pair<int,int>> v[], int st, int n)
{
    bool *visited = new bool[n];
     stack<int> s;
    for(int i=0; i<n; i++)
        visited[i]=false;
    
    for(int i=0; i<n; i++)
    {
        if(!visited[i])
        {
            topologicalSort(v, i, visited, s);
        }
    }
    int dist[n];
    for(int i=0; i<n; i++)
    {
        dist[i]=INT_MAX;
    }
    
    dist[st]=0;

    while(!s.empty())
    {
        int front = s.top();
        s.pop();

        if(dist[front]!=INT_MAX)
        {
            for(auto it:v[front])
            {
                if(dist[it.first]>dist[front]+it.second)
                {
                    dist[it.first]=dist[front]+it.second;
                }
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<dist[i]<<" ";
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>> v[n];
    for(int i=0; i<e; i++)
    {
        int f,s,w;
        cin>>f>>s>>w;
        v[f].push_back({s, w});   
    }

    shortest(v, 0, n);
return 0;
}