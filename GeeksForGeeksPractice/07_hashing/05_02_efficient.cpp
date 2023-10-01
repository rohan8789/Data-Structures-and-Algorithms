#include<bits/stdc++.h>
using namespace std;

int efficient(int *arr,int *brr,int n,int m)
{
    int res=0;
    unordered_set<int> s;
    for(int i=0; i<n; i++)
    {
        s.insert(arr[i]);
    }
    for(int i=0; i<m; i++)
    {
        if(s.find(brr[i])!=s.end())
        {
            res++;
            s.erase(brr[i]);
        }
    }
    return res;
}


int main()
{
    int arr[]={10,15,20,15,30,30,5};
    int n=sizeof(arr)/sizeof(int);
    int brr[]={30,5,30,80};
    int m=sizeof(brr)/sizeof(int);
    int ans=efficient(arr,brr,n,m);
    cout<<ans<<endl;
return 0;
}