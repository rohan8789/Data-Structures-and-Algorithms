#include<bits/stdc++.h>
using namespace std;

void MoveZerosToEnd(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[j]!=0)
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
}

int main()
{
    int arr[] = {3, 5, 0, 2, 11, 0, 0, 19};
    int n = sizeof(arr)/sizeof(int);
    MoveZerosToEnd(arr, n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}