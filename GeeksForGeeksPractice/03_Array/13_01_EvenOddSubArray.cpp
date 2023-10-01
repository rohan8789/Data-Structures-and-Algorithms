#include<bits/stdc++.h>
using namespace std;

int MaxSumSubArray(int *arr, int n)
{
    int c=1;
    int res=1;
    for(int i=0; i<n; i++)
    {
        if((arr[i]%2==0 && arr[i+1]%2==1)||(arr[i]%2==1 && arr[i+1]%2==0))
        {
            c++;
            res = max(res, c);
        }
        else
            c=1;
    }
    return res;
}

int main()
{
    int arr[] = {7,12,13,14};
    int n=sizeof(arr)/sizeof(int);
    int ans=MaxSumSubArray(arr, n);
    cout<<ans<<endl;
return 0;
}