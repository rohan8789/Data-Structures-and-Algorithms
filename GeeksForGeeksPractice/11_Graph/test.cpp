#include<bits/stdc++.h>
using namespace std;


vector<int> topologicalSort(vector<pair<int,int>> v[], int n)
{
    
}

void shortestPath(vector<pair<int,int> >v[], int sv, int n)
{
    bool *visited = new bool[n];
    for(int i=0; i<n; i++)
    {
        visited[i]=false;
    }
    vector<int> ans=topologicalSort(v, n);
}

int main()
{
    int n,e;
    cin>>n>>e;
    vector<pair<int,int> >v[n];
    for(int i=0; i<e; i++)
    {
        int f,s,w;
        cin>>f>>s>>w;
        v[f].push_back({s,w});
    }

    shortestPath(v, 0, n);
return 0;
}