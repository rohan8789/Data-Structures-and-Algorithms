#include<bits/stdc++.h>
using namespace std;

int efficient(int *arr, int n, int *brr,int m)
{
    unordered_set<int> s;
    for(int i=0; i<n; i++)
    {
        s.insert(arr[i]);
    }
    for(int i=0; i<m; i++)
    {
        s.insert(brr[i]);
    }
    for(auto it=s.begin(); it!=s.end(); it++)
    {
        cout<<*(it)<<" ";
    }
    return s.size();
}


int main()
{
    int arr[]={15,20,5,15};
    int n=sizeof(arr)/sizeof(int);
    int brr[]={15,15,15,20,10,30};
    int m=sizeof(brr)/sizeof(int);
    int ans=efficient(arr,n,brr,m);
    cout<<endl<<ans<<endl;
return 0;
}