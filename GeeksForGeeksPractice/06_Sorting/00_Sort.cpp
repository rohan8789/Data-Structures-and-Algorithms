#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={10, 5, 13, 1, 12};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    sort(arr, arr+n);
    cout<<endl;
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    sort(arr, arr+n, greater<int>());
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
return 0;
}