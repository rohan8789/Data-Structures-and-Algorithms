#include<bits/stdc++.h>
using namespace std;

void Naive(int *arr, int n, int x)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int sum=arr[i]+arr[j];
            if(sum==x)
            {
                cout<<arr[i]<<" "<<arr[j];
            }
        }
    }
}

void TwoPointer(int *arr, int n, int x)
{
    int l=0,h=n-1;
    int sum=0;
    while(l<=h)
    {
        sum=arr[l]+arr[h];
        if(sum==x)
        {
            cout<<arr[l]<<" "<<arr[h]<<endl;
            l++;h--;
        }
        if(arr[l]+arr[h]<x)
        {
            l++;
        }
        else{
            h--;
        }
    }
}

int main()
{
    int arr[]={3,5,9,2,8,10,11};
    int n=sizeof(arr)/sizeof(int);
    Naive(arr, n, 17);
return 0;
}