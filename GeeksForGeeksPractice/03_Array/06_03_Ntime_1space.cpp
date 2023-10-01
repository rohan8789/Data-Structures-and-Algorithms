#include<bits/stdc++.h>
using namespace std;

void Reverse(int *arr, int low, int high)
{
    while(low<high)
    {
        int t = arr[low];
        arr[low]=arr[high];
        arr[high] = t;
        low++;high--;
    }
}

void rotate(int *arr, int n, int d)
{
    Reverse(arr, 0, d-1);
    Reverse(arr, d, n-1);
    Reverse(arr, 0, n-1);
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    rotate(arr, n, 3);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}