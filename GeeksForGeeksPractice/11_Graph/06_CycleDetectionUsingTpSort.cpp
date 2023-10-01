#include<bits/stdc++.h>
using namespace std;

bool detect(vector<int> v[], int n)
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

    vector<int>vec;
    int count=0;
    
    while(!q.empty())
    {
        int front=q.front();
        q.pop();
        vec.push_back(front);
        for(int it:v[front])
        {
            indegree[it]--;
            if(indegree[it]==0)
            {
                q.push(it);
            }
        }
        count++;
    }
    if(count==n)
    {
        return false;
    }
    return true;
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

    bool ans=detect(v, n);
    if(ans)
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
return 0;
}