#include<bits/stdc++.h>
using namespace std;

void LeftRotate(int *arr, int n)
{
    int i;
    int t=arr[0];
    for(i=0; i<n; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[i-1]=t;
}

int main()
{
    int arr[] = {1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    LeftRotate(arr, n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}