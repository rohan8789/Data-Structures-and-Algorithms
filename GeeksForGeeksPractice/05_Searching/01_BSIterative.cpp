#include<bits/stdc++.h>
using namespace std;

int iterative(int *arr, int n, int k)
{
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]>k)
        {
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}

int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    int k=400;
    int ans=iterative(arr,n, k);
    cout<<ans<<endl;
return 0;
}