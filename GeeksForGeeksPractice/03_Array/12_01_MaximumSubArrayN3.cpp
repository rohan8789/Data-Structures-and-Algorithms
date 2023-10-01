#include<bits/stdc++.h>
using namespace std;

int MaxSubArray(int *arr, int n)
{
    int sum, msum=-1;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            sum=0;
            for(int k=i; k<j; k++)
            {
                sum=sum+arr[k];
                cout<<arr[k]<<" ";
            }
        cout<<endl;
        }
        if(sum>msum)
            msum=sum;
    }
    return msum;
}


int main()
{
    int arr[] = {2,3,-8,7,-1,2,3};
    int n=sizeof(arr)/sizeof(int);
    int ans=MaxSubArray(arr, n);
    cout<<ans<<endl;
return 0;
}