#include<bits/stdc++.h>
using namespace std;

int Naive(int *arr, int n)
{
    int res=1, cur=1;
    sort(arr, arr+n);
    for(int i=1; i<n; i++)
    {
        if(arr[i]-arr[i-1]==1)
        {
            cur++;
        }
        else{
            res=max(res, cur);
            cur=1;
        }
    }
    res=max(res, cur);
    return res;
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    int ans=Naive(arr ,n);
    cout<<ans<<endl;

return 0;
}