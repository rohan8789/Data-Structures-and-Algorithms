#include<bits/stdc++.h>
using namespace std;

vector<int> tpSort(vector<int> v[], int n)
{
    vector<int> indegree(n, 0);
    for(int i=0; i<n; i++)
    {
        for(auto it:v[i])
        {
            indegree[it]++;
        }
    }

    queue<int> q;
    for(int i=0; i<n; i++)
    {
        if(indegree[i]==0)
        {
            q.push(i);
        }
    }

    vector<int> ans;
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        ans.push_back(front);
        for(auto it:v[front])
        {
            indegree[it]--;
            if(indegree[it]==0)
            {
                q.push(it);
            }
        }
    }
    return ans;
}

int main()
{
    int n,e;
    cin>>n>>e;
    vector<int> v[n];
    for(int i=0; i<e; i++)
    {
        int f,s;
        cin>>f>>s;
        v[f].push_back(s);
    }
    vector<int> ans=tpSort(v, n);
    for(auto it: ans)
    {
        cout<<it<<" ";
    }
return 0;
}