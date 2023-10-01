#include<bits/stdc++.h>
using namespace std;

int MaxSumSubArray(int *arr, int n)
{
    int cSum=arr[0];
    int oSum=arr[0];
    for(int i=1; i<n; i++)
    {
        if(cSum+arr[i]>arr[i])
        {
            cSum=cSum+arr[i];
        }
        else{
            cSum=arr[i];
        }
        if(oSum<cSum)
        {
            oSum=cSum;
        }
    }
    return oSum;
}


int main()
{
    int arr[] = {2,3,-8,7,-1,2,3};
    int n=sizeof(arr)/sizeof(int);
    int ans=MaxSumSubArray(arr, n);
    cout<<ans<<endl;
return 0;
}