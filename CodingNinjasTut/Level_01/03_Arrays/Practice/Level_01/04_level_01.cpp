//sort
#include<bits/stdc++.h>
using namespace std;

void Merge(int *arr, int low, int mid, int high)
{
    int i=low;
    int j = mid+1;
    int k = low;
    int B[high+1];

    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j])
        {
            B[k]=arr[i];
            k++;i++;
        }
        else{
            B[k]=arr[j];
            k++;j++;
        }
    }
    while(i<=mid)
    {
        B[k]=arr[i];
        k++;i++;
    }
    while(j<=high)
    {
        B[k]=arr[j];
        k++;j++;
    }
    for(i=low; i<=high; i++)
    {
        arr[i]=B[i];
    }
}

void MergeSort(int *arr, int low, int high)
{
    if(low<high)
    {
        int mid = (low+high)/2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid+1, high);

        Merge(arr, low, mid, high);
    }
}

void sort(int *arr, int n)
{
    if(n==0)
        return;
    int low=0;
    int high=n-1;
    MergeSort(arr, low, high);
}

int main()
{
    int n;
    cin>>n;
    int *arr= new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}