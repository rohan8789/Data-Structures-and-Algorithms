#include<bits/stdc++.h>
using namespace std;

int MoveZerosToEnd(int *arr, int n)
{
    int c=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            arr[c]=arr[i];
            c++;
        }
    }
    int d=c;
    for(int i=d; i<n; i++)
    {
        arr[c]=0;
        c++;
    }
    return c;
}

int main()
{
    int arr[] = {3, 5, 0, 2, 11, 0, 0, 19};
    int n = sizeof(arr)/sizeof(int);
    int ans= MoveZerosToEnd(arr, n);
    for(int i=0; i<ans; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}