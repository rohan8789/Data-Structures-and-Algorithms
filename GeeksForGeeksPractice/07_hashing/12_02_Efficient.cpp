#include<bits/stdc++.h>
using namespace std;

int subArray(int *arr, int *brr, int n, int m)
{
    int res=0, c[n+m];
    for(int i=0; i<n+m; i++)
    {
        c[i]=arr[i];
    }
    for(int i=0; i<n+m; i++)
    {
        c[n+i]=brr[i];
    }
    for(int i=0; i<n+m; i++)
    {
        cout<<c[i]<<" ";
    }
    unordered_map<int,int> mp;
    int s1=0,s2=0;
    for(int i=0; i<n; i++)
    {

    }
    return res;
}

int main()
{
    int arr[]={0,1,0,0,0,0};
    int brr[]={1,0,1,0,0,1};
    int n=sizeof(arr)/sizeof(int);
    int m=sizeof(brr)/sizeof(int);
    int ans=subArray(arr,brr, n,m);
    cout<<ans<<endl;
return 0;
}