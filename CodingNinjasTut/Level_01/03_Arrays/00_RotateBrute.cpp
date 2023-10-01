#include<bits/stdc++.h>
using namespace std;

void leftrotate(int *arr, int d, int n)
{
    for(int i=0; i<d; i++)
    {
        int temp=arr[0];
        for(int i=0; i<n; i++)
        {
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
}

void rightrotate(int *arr, int d, int n)
{
    for(int i=0; i<d; i++)
    {
        int temp=arr[n-1];
        for(int i=n-1; i>=0; i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
    }
}

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    leftrotate(arr, d, n);
    

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    rightrotate(arr, d, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

cout<<endl;
    rightrotate(arr, d, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}