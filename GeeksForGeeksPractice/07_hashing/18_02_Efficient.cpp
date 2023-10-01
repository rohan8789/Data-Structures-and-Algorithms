#include<bits/stdc++.h>
using namespace std;

vector<int> countNbyK(int *arr, int n, int k)
{
    vector<int> v;
    unordered_map<int,int> m;
    for(int i=0; i<n; i++)
    {
        m[arr[i]]++;
    }
    for(auto x:m)
    {
        if(x.second>n/k)
        {
            v.push_back(x.first);
        }
    }
    return v;
}

int main()
{
    int arr[]={30,10,20,20,10,20,30,30};
    int n=sizeof(arr)/sizeof(int);
    vector<int> ans=countNbyK(arr, n, 4);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
return 0;
}