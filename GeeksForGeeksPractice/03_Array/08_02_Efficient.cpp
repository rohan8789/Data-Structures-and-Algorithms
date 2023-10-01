#include<bits/stdc++.h>
using namespace std;

int MaxDiff(int *arr, int n)
{
    int res=arr[1]-arr[0];
    int minval=arr[0];
    for(int i=1; i<n; i++)
    {
        res=max(res, arr[i]-minval);
        minval=min(minval, arr[i]);
    }
    return res;
}

int main()
{
    int arr[] = {30,20,8,2};
    int n = sizeof(arr)/sizeof(int);
    int ans = MaxDiff(arr, n);
    cout<<ans<<endl;
return 0;
}