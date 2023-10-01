#include<bits/stdc++.h>
using namespace std;

int FirstOccurance(int *arr, int n, int x)
{
    int l=0;
    int h=n-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}

int Efficient(int *arr, int n, int x)
{
    int l=0, h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]>x)
        {
            h=mid-1;
        }
        else if(arr[mid]<x){
            l=mid+1;
        }
        else
        {
            if(arr[mid]!=arr[mid-1])
            {
                return mid;
            }
            else{
                h=mid-1;
            }
        }
    }
    return -1;
}



int main()
{
    int arr[]={10,10,10,10,10,10,10};
    int n=sizeof(arr)/sizeof(int);
    int x=10;
    //int ans= FirstOccurance(arr, n, x);
    int ans= Efficient(arr, n, x);
    cout<<ans<<endl;
return 0;
}