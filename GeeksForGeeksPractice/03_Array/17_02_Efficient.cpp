#include<bits/stdc++.h>
using namespace std;

int kConsecutive(int *arr, int n,int k)
{
    int sum=0;
    for(int i=0; i<k; i++)
    {
        cout<<arr[i]<<" ";
        sum=sum+arr[i];
    }
    cout<<endl;
    int window_sum=sum;
    int mSum=INT_MIN;
    for(int i=k; i<n; i++)
    {
        cout<<arr[i]<<" ";
        cout<<arr[i-k]<<" ";
        window_sum+=arr[i]-arr[i-k];
        mSum=max(mSum, window_sum);
    }
    cout<<endl;
    return mSum;
}

int main()
{
    int arr[] = {1,8,30,-5,20,7};
    int n=sizeof(arr)/sizeof(int);
    int ans=kConsecutive(arr,n, 3);
    cout<<ans<<endl;
return 0;
}