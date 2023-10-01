#include<bits/stdc++.h>
using namespace std;

int lomuto(int *arr, int l, int h)
{
    int pivot=arr[h];
    int i=l-1;
    for(int j=l; j<h; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[h]);
    return (i+1);
}

int main()
{
    int arr[]={30,40,20,50,80};
    int n=sizeof(arr)/sizeof(int);
    int l=0;
    int h=n-1;
    int ans=lomuto(arr, l, h);
    cout<<ans<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}