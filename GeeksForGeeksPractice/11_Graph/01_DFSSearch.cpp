#include<bits/stdc++.h>
using namespace std;

void bfsSearch(vector<int> v[], int n, int sv)
{
    bool *visited = new bool[n];
    for(int i=0; i<n; i++)
    {
        visited[i]=false;
    }
    queue<int> q;
    q.push(sv);
    while(!q.empty())
    {
        int front = q.front();
        q.pop();
        cout<<front<<" ";
        for(auto i:v[front])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i]=true;
            }
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    vector<int> v[n];
    for(int i=0; i<e; i++)
    {
        int f, s;
        cin>>f>>s;
        v[f].push_back(s);
        v[s].push_back(f);
    }

    dfsSearch(v, n, 0);
return 0;
}