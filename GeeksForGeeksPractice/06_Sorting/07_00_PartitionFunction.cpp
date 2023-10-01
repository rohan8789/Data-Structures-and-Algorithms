#include<bits/stdc++.h>
using namespace std;

void Naive(int *arr, int n)
{
    int p=arr[n-1];
    int temp[n];
    int ind=0;
    for(int i=0; i<n; i++)
    {
        if(p>=arr[i]){
            temp[ind]=arr[i];
            ind++;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(p<arr[i]){
            temp[ind]=arr[i];
            ind++;
        }
    }
    for(int i=0; i<n; i++)
    {
        arr[i]=temp[i];
    }
}

int main()
{
    int arr[]={3,8,6,12,10,7};
    int n=sizeof(arr)/sizeof(int);
    Naive(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}