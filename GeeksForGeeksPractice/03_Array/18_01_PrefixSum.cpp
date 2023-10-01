#include<bits/stdc++.h>
using namespace std;

int Prefix(int *arr, int n, int i, int j)
{
    int pSum[n];
    pSum[0]=arr[0];
    for(int k=1; k<n; k++)
    {
        pSum[k]=pSum[k-1]+arr[k];
    }
    
    if(i!=0)
    {
        return pSum[j]-pSum[i];
    }
    else{
        return pSum[j];
    }
}

int main()
{
    int arr[]={2,8,3,9,6,5,4};
    int n=sizeof(arr)/sizeof(int);
    int ans=Prefix(arr,n, 2, 6);
    cout<<ans<<endl;
return 0;
}