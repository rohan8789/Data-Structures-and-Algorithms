#include<bits/stdc++.h>
using namespace std;

bool DFSRec(vector<int> v[], int sv, bool *visited, bool *helper)
{
    visited[sv]=true;
    helper[sv]=true;
    for(auto i:v[sv])
    {
        if(!visited[i] && DFSRec(v, i, visited, helper)==true)
        {
            return true;
        }
        else if(helper[i]==true){
            return true;
        }
    }
    helper[sv]=false;
    return false;

}

bool DFS(vector<int> v[], int n)
{
    bool *visited = new bool[n];
    bool *helper = new bool[n];
    for(int i=0; i<n; i++)
    {
        visited[i]=false;
        helper[i]=false;
    }
    for(int i=0; i<n; i++)
    {
        if(!visited[i])
        {
            if(DFSRec(v, i, visited, helper)==true)
            {
                return true;
            }
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

    bool ans =DFS(v, n);
    if(ans)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
return 0;
}