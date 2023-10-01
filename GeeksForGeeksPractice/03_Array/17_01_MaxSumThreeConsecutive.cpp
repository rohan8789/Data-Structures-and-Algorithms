#include<bits/stdc++.h>
using namespace std;

int kConsecutive(int *arr, int n, int k)
{
    int sum;
    int m=INT_MIN;
    for(int i=0; i<n-k+1; i++)
    {
        sum=0;
        for(int j=0; j<k; j++)
        {
            sum=sum+arr[i+j];
        }
        m=max(sum,m);
    }
    return m;
}

int main()
{
    int arr[] = {1,8,30,-5,20,7};
    int n=sizeof(arr)/sizeof(int);
    int ans=kConsecutive(arr,n, 3);
    cout<<ans<<endl;
return 0;
}