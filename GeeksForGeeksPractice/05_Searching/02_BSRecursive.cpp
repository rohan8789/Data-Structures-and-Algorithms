#include<bits/stdc++.h>
using namespace std;

int BSRecursive(int *arr, int l, int h, int k)
{
    if(l>h)
    {
        return -1;
    }

    int mid = (l+h)/2;
    if(arr[mid]==k)
        return mid;

    else if(arr[mid]>k)
        return BSRecursive(arr, l, mid-1, k);
    else
        return BSRecursive(arr, mid+1, h, k);
}

int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    int k=40;
    int l=0;
    int h=n-1;
    int ans=BSRecursive(arr, l, h, k);
    cout<<ans<<endl;
return 0;
}