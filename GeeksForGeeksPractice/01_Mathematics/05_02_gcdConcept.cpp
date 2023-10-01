#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin>>n;
    int *arr= new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    //int ans=arr[0];
    for(i=0; i<n-1; i++)
    {
        arr[i+1] = ((arr[i]*arr[i+1])/(__gcd(arr[i], arr[i+1])));
    }
    cout<<arr[i];
return 0;
}