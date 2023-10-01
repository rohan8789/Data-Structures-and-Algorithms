#include<bits/stdc++.h>
using namespace std;


int partitioning(int *arr, int n, int p)
{
    int l=0, h=n-1;
    swap(p, arr[h]);
    int i=l-1;
    for(int j=l; j<h; j++)
    {
        if(arr[j]<=p)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1], arr[h]);
    return (i+1);
}


int main()
{
    int arr[]={2,1,2,20,10,20,1};
    int n=sizeof(arr)/sizeof(int);
    int ans=partitioning(arr, n, 2);
    cout<<ans<<endl;
    for(int i=0; i<n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}