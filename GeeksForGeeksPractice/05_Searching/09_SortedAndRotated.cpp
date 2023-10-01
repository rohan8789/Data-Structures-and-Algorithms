#include<bits/stdc++.h>
using namespace std;

int SortedRotated(int *arr, int n, int x)
{
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==x)
            return mid;
        if(arr[l]<arr[mid])
        {
            if(x>=arr[l] && x<arr[mid])
                h=mid-1;
            else
                l=mid+1;
        }
        else{
            if(x>arr[mid] && x<=arr[h])
                l=mid+1;
            else
                h=mid-1;
        }
    }
    return -1;
}


int main()
{
    int arr[]={10,20,30,40,50,8,9};
    int n=sizeof(arr)/sizeof(int);
    int x=8;
    int ans= SortedRotated(arr, n,x);
    cout<<ans<<endl;
return 0;
}