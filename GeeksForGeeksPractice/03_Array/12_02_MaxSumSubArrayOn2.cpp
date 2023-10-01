#include<bits/stdc++.h>
using namespace std;

int MaxSumSubArray(int *arr, int n)
{
    int sum, cSum=-1;
    for(int i=0; i<n; i++)
    {
        sum=0;
        for(int j=i; j<n; j++)
        {
            sum=sum+arr[j];
            if(sum>cSum){
                cSum=sum;
            }
        }
    }
    return cSum;
}

int main()
{
    int arr[] = {2,3,-8,7,-1,2,3};
    int n=sizeof(arr)/sizeof(int);
    int ans=MaxSumSubArray(arr, n);
    cout<<ans<<endl;
return 0;
}