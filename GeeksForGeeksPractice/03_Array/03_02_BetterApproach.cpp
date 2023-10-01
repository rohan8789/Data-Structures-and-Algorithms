#include<bits/stdc++.h>
using namespace std;

int duplicate(int *arr, int n)
{
    int res=0;
    for(int i=0; i<n; i++)
    {
        if(arr[res-1]!=arr[i])
        {
            arr[res]=arr[i];
            res++;   
        }
    }
    return res;
}

int main()
{
    int arr[] = {4, 5, 6, 6, 6, 7, 8, 8, 8, 9};
    int n = sizeof(arr)/sizeof(int);
    int ans=duplicate(arr ,n);
    cout<<ans<<endl;
    for(int i=0; i<ans; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}