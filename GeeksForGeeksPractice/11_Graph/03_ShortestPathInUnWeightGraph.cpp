#include<bits/stdc++.h>
using namespace std;

void bfsSearch(vector<int> v[], int n, int sv)
{
    int arr[n]; 
    for(int i=0; i<n; i++)
    {
        arr[i]=INT_MAX;
    }
    queue<int> q;
    arr[sv]=0;
    q.push(sv);
    while(!q.empty())
    {
        int front = q.front();
        q.pop();
        cout<<front<<" ";
        for(auto i:v[front])
        {
            if(arr[front]+1<arr[i])
            {
                arr[i]=arr[front]+1;
                q.push(i);
            }
        }
    }
    cout<<endl<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
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

    }

    bfsSearch(v, n, 0);
return 0;
}