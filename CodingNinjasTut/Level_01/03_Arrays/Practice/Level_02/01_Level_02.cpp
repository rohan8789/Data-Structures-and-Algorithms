#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int temp = arr[n-1];
    for(int i=n-1; i>=0; --i)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=temp;

    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}