#include<bits/stdc++.h>
using namespace std;

int kadane(int *arr, int n)
{
    int csum=arr[0];
    int osum=arr[0];
    for(int i=1; i<n; i++)
    {
        if(csum>=0)
        {
            csum+=arr[i];
        }
        else{
            csum=arr[i];
        }
        if(csum>osum)
            osum=csum;
    }
    return osum;
}

int CircularSum(int *arr, int n)
{
    int ans = kadane(arr, n);
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
        arr[i]=-arr[i];
    }
    int maxCircular=sum+kadane(arr, n);
    return max(ans, maxCircular);

}

int main()
{
    int arr[]={8,-4,3,-5,4};
    //int arr[]={3,-4,5,6,-8,7};
    int n=sizeof(arr)/sizeof(int);
    int ans = CircularSum(arr,n);
    cout<<ans<<endl;
return 0;
}