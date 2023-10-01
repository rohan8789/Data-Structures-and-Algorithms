#include<bits/stdc++.h>
using namespace std;

void printDFS(int **edges, int n, int sv, bool *visited)
{
    cout<<sv<<" ";
    visited[sv]=true;
    for(int i=0; i<n; i++)
    {
        if(i==sv)
            continue;
        if(edges[sv][i]==1 && !visited[i])
        {
            printDFS(edges, n, i, visited);
        }
    }
}

void printBFS(int **edges, int n, int sv)
{
    queue<int> q;
    bool *visited = new bool[n];
    for(int i=0; i<n; i++)
    {
        visited[i]=false;
    }
    q.push(sv);
    visited[sv]=true;
    while(!q.empty())
    {
        int front = q.front();
        q.pop();
        cout<<front<<" ";
        for(int i=0; i<n; i++)
        {
            if(edges[front][i]==1 && !visited[i])
            {
                q.push(i);
                visited[i]=true;
            }
        }
    }
}

int main()
{
    //DFS and BFS
    int n, e;
    cin>>n>>e;
    int **edges = new int*[n];
    for(int i=0; i<n; i++)
    {
        edges[i]=new int[n];
        for(int j=0; j<n; j++)
        {
            edges[i][j]=0;
        }
    }

    for(int i=0; i<e; i++)
    {
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }

    bool *visited = new bool[n];
    for(int i=0; i<n; i++)
    {
        visited[i]=false;
    }
    printDFS(edges, n, 0, visited);
    cout<<endl<<endl;
    printBFS(edges, n, 0);
return 0;
}