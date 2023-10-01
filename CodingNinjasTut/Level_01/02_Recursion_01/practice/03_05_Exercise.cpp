#include<bits/stdc++.h>
using namespace std;

bool searchArray(int arr[], int n, int k)
{
    if(n<0)
        return false;
    if(arr[n]==k)
        return true;
    else
        return searchArray(arr, n-1, k);
        
}

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    bool ans = searchArray(arr, n, k);
    cout<<ans<<endl;
return 0;
}