#include<bits/stdc++.h>
using namespace std;

int SubArray(int *arr, int n)
{
    int sum=0, res=0;
    unordered_map<int,int> m;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            arr[i]=-1;
        }
    }
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
        if(sum==0)
        {
            res=i+1;
        }
        if(m.find(sum)!=m.end())
        {
            res=max(res, i-m[sum]);
        }
        m.insert({arr[i], i});
    }
    return res;
}

int main()
{
    int arr[]={0,0,1,0,0,0};
    int n=sizeof(arr)/sizeof(int);
    int ans=SubArray(arr, n);
    cout<<ans<<endl;
return 0;
}