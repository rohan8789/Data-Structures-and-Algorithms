#include<bits/stdc++.h>
using namespace std;

void rotate(int *arr, int n, int d)
{
    int temp[d];//to save the order till d before disturbing it.
    for(int i=0; i<d; i++)
    {
        temp[i]=arr[i];
    }
    for(int i=d; i<n; i++)
    {
        arr[i-d]=arr[i];
    }
    for(int i=0; i<d; i++)
    {
        arr[n+i-d]=temp[i];
    }
    cout<<endl;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    rotate(arr, n, 3);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}