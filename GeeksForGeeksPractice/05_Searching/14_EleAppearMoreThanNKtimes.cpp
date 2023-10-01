#include<bits/stdc++.h>
using namespace std;

vector<int> NkTimes(int *arr, int n, int k)
{
    int c, x=-1;
    vector<int> v;
    for(int i=0; i<n-1; i++)
    {
        c= 1;
        if(arr[i]!=-1)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[i]==arr[j]){
                    c++;
                    arr[j]=-1;
                }
            }
        }
        if(c>n/k && x!=arr[i])
        {
            x=arr[i];
            v.push_back(arr[i]);
        }
    }
    return v;
}

vector<int> Hashing(int *arr, int n, int k)
{
    unordered_map<int,int> mp;
    vector<int> v;
    int x=-1;
    for(int i=0; i<n; i++)
    {
        mp[arr[i]]++;
    }
    for(int i=1; i<n; i++)
    {
        if(mp[arr[i]]>n/k &&x!=mp[arr[i]])
        {
            v.push_back(i);
            x=i;
        }
    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    int arr[]={3,1,2,2,1,2,3,3};
    int n=sizeof(arr)/sizeof(int);
    // vector<int> ans=NkTimes(arr, n, 4);
    vector<int> ans=Hashing(arr, n, 4);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
return 0;
}