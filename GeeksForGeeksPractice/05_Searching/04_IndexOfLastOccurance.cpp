#include<bits/stdc++.h>
using namespace std;

int Lastccurance(int *arr, int n, int x)
{
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]>x)
            h=mid-1;
        else if(arr[mid]<x)
            l=mid+1;
        else{
            if(mid==0 || arr[mid]!=arr[mid+1])
                return mid;
            else
                l=mid+1;
        }
    }
    return -1;
}

int Naive(int *arr, int n, int x)
{
    int ans=-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            ans=i;
        }
    }
    return ans;

}

int main()
{
    int arr[]={10,15,20,20,20,20,20,40,40};
    int n=sizeof(arr)/sizeof(int);
    int x=20;
    int ans=Naive(arr, n, x);
    // int ans=Lastccurance(arr, n, x);
    
    cout<<ans<<endl;
return 0;
}