#include<bits/stdc++.h>
using namespace std;

int CountOccurance(int *arr, int n, int x)
{
    int c=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
            c++;
    }
    return c;
}

int first(int *arr, int n, int x)
{
    int l=0, h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]>x)
            h=mid-1;

        else if(arr[mid]<x)
            l=mid+1;

        else{
            if(arr[mid]!=arr[mid-1])
                return mid;
            else
                h=mid-1;
        }
    }
    return -1;
}

int Last(int *arr, int n, int x)
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


int Efficient(int *arr, int n, int x)
{
    int ans1=first(arr, n, x);
    if(ans1==-1){
        return 0;
    }
    int ans2=Last(arr,n,x);
    return abs(ans2-ans1)+1;
}

int main()
{
    int arr[]={10,20,20,20,20,20,20,20,30,40};
    int n=sizeof(arr)/sizeof(int);
    int x=20;
    //int ans=CountOccurance(arr, n, x);
    int ans=Efficient(arr, n, x);
    cout<<ans<<endl;
return 0;
}