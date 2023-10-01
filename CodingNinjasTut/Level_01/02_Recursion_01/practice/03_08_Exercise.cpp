//lastIndex
#include<bits/stdc++.h>
using namespace std;

int lastIndex(int *arr, int n, int k)
{
    if(n<0)
        return -1;
    if(arr[n-1]==k)
        return 11;
    int ans = lastIndex(arr+1, n-1, k);
    return ans;
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
    int z = lastIndex(arr, n, k);
    cout<<z<<endl;
return 0;
}