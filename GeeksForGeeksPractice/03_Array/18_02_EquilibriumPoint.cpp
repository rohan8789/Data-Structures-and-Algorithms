#include<bits/stdc++.h>
using namespace std;

void Equilibrium(int *arr,int n)
{
    int prefix[n];
    prefix[0]=arr[0];
    for(int i=1; i<n; i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<prefix[i]<<" ";
    }
    int suffix[n];
    suffix[n-1]=arr[n-1];
    for(int i=n-2; i>=0; i--)
    {
        suffix[i]=suffix[i+1]+arr[i];
    }
    cout<<endl;
    for(int i=0; i<n; i++)
    {
       cout<<suffix[i]<<" ";
    }
    cout<<endl<<endl;
    for(int i=0; i<n; i++)
    {
        if(prefix[i]==suffix[i])
        {
            cout<<arr[i];
            cout<<i<<endl;
        }
    }
}


int main()
{
    int arr[]={3,4,8,-9,20,6};
    int n=sizeof(arr)/sizeof(int);
    Equilibrium(arr,n);
return 0;
}