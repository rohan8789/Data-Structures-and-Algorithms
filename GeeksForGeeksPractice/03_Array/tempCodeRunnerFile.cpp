#include<bits/stdc++.h>
using namespace std;

int duplicate(int *arr, int n)
{
    int temp[n];
    int res=0;
    for(int i=1; i<n; i++)
    {
        if(temp[res-1]==arr[i])
        {
            temp[res]=arr[i];
            res++;
        }
    }
    for(int i=0; i<res; i++)
    {
        arr[i]=temp[i];
    }
    return res;
}

int main()
{
    int arr[] = {4, 5, 6, 6, 6, 7, 8, 8, 8, 9};
    int n = sizeof(arr)/sizeof(int);
    int ans=duplicate(arr ,n);
    for(int i=0; i<ans; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}