#include<bits/stdc++.h>
using namespace std;

int SubArray(int *arr, int n)
{
    int res=0;
    for(int i=0; i<n; i++)
    {
        int c0=0, c1=0;
        int j;
        for(j=i; j<n; j++)
        {
            if(arr[j]==0)
                c0++;
            else
                c1++;
            if(c0==c1)
            {
                res=max(res, j-i+1);
            } 
        }
    }
    return res;
}

int main()
{
    int arr[]={1,0,1,1,1,0,0};
    int n=sizeof(arr)/sizeof(int);
    int ans=SubArray(arr, n);
    cout<<ans<<endl;
return 0;
}