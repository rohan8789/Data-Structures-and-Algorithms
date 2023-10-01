#include<bits/stdc++.h>
using namespace std;

bool detect(vector<int> v[], int sv, bool *visited, int parent)
{
    visited[sv]=true;
    for(int i:v[sv])
    {
        if(visited[i]==false)
        {
            if(detect(v, i, visited, sv)==true)
            {
                return true;
            }
        }
        else if(i!=parent)
        {
            return true;
        }
    }
    return false;
}

bool detectCycle(vector<int> v[], int n)
{
    bool *visited = new bool[n];
    for(int i=0; i<n; i++)
    {
        visited[i]=false;
    }
    for(int i=0; i<n; i++)
    {
        if(!visited[i])
        {
            if(detect(v, 0, visited, -1)==true)
                return true;
        }
    }
    return false;
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
    bool ans=detectCycle(v, n);
    if(ans==true)
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
return 0;
}