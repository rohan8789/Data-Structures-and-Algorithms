//seggregate -ve and +ve number
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
    int *c= new int[n];
    int k=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>=0)
        {
            c[k]=arr[i];
            k++;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            c[k]=arr[i];
            k++;
        }
    }
    for(int i=0; i<n; i++)
    {
        arr[i]=c[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}