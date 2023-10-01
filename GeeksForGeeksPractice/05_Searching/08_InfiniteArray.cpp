#include<bits/stdc++.h>
using namespace std;

int InfiniteArray(int *arr,int x)
{
    int i=0;
    while(true)
    {
        if(arr[i]==x)
            return i;

        if(arr[i]>x)
            return -1;
        i++;
    }
}

int efficient(int *arr, int x)
{
    int i=0;
    int ans;
    while(arr[i]<x)
        i++;

    if(arr[i]==x)
        ans=i;
    if(arr[i]>x)
        ans=-1;
    return ans;
}

int main()
{
    int arr[]={20,40,50,70,100,300,500};
    int x=300;
    //int ans=InfiniteArray(arr,x);
    int ans=efficient(arr, x);
    cout<<ans<<endl;
return 0;
}