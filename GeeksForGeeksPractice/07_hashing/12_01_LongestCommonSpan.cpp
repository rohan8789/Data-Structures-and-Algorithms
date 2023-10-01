#include<bits/stdc++.h>
using namespace std;

int subArray(int *arr, int *brr, int n, int m)
{
    int res=0;
    for(int i=0; i<n; i++)
    {
        int sum1=0, sum2=0;
        for(int j=i; j<n; j++)
        {
            sum1+=arr[j];
            sum2+=brr[j];
            if(sum1==sum2)
            {
                res=max(res,j-i+1);
            }
        }
    }
    return res;
}

int main()
{
    int arr[]={0,1,0,0,0,0};
    int brr[]={1,0,1,0,0,1};
    int n=sizeof(arr)/sizeof(int);
    int m=sizeof(brr)/sizeof(int);
    int ans=subArray(arr,brr, n,m);
    cout<<ans<<endl;
return 0;
}