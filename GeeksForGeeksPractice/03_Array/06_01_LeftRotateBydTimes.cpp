#include<bits/stdc++.h>
using namespace std;

void LeftRotateByK(int *arr, int n, int d)
{
    for(int i=0; i<d; i++)
    {
        int temp = arr[0];
        for(int j=0; j<n; j++)
        {
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int d=3;
    LeftRotateByK(arr, n, d);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}