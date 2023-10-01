#include<bits/stdc++.h>
using namespace std;

int MaxConsecutiveOne(int *arr, int n)
{
    int curr=0;
    int res=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
            curr=0;
        else{
            curr++;
            res=max(res,curr);
        }
    }
    return res;
}


int main()
{
    int arr[] = {0,1,1,0,0,1,1,1,1,0,1};
    int n=sizeof(arr)/sizeof(int);
    int ans=MaxConsecutiveOne(arr, n);
    cout<<ans<<endl;
return 0;
}