#include<bits/stdc++.h>
using namespace std;


//O(n) time and O(n) space
int MoveZerosToEnd(int *arr, int n)
{
    int temp[n];
    int c=0,d=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            temp[c]=arr[i];
            c++;
        }
    }
    cout<<c<<endl;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            temp[c]=arr[i];
            c++;
        }
    }
    for(int i=0; i<c; i++)
    {
        arr[i]=temp[i];
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