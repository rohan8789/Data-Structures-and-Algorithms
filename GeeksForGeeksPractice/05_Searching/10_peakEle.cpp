#include<bits/stdc++.h>
using namespace std;

void Peak(int *arr, int n)
{
    if(arr[0]>=arr[1])
        cout<<arr[0]<<" ";
    
    if(arr[n-1]>=arr[n-2])
        cout<<arr[n-1]<<" ";

    for(int i=1; i<n-1; i++)
    {
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
        {
            cout<<arr[i]<<" ";
        }
    }
}

void Efficient(int *arr, int n)
{
    int l=0, h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(mid==0 || arr[mid-1]<=arr[mid] && mid==n-1 || arr[mid+1]<=arr[mid])
        {
            cout<<arr[mid]<<" ";
        }
        if(mid>0 && arr[mid+1]>=arr[mid])
            l=mid+1;
        else
            h=mid-1;
    }
}


int main()
{
    int arr[]={10,20,15,5,23,90,67};
    int n=sizeof(arr)/sizeof(int);
    // Peak(arr, n);
    Efficient(arr, n);
return 0;
}