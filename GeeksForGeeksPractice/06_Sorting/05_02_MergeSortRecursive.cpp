#include<bits/stdc++.h>
using namespace std;


void Merge(int *arr, int low, int mid, int high)
{
    int i=low; 
    int j=mid+1;
    int k=low;
    int c[high+1];
    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j])
        {
            c[k]=arr[i];
            k++;i++;
        }
        else{
            c[k]=arr[j];
            k++;j++;
        }
    }
    while(i<=mid)
    {
        c[k]=arr[i];
        k++;i++;
    }
    while(j<=high)
    {
        c[k]=arr[j];
        k++;j++;
    }
    for(int i=low; i<=high; i++)
    {
        arr[i]=c[i];
    }
    cout<<endl;
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

void Sort(int *arr, int n)
{
    if(n==0){
        return;
    }
    int low = 0;
    int high = n-1;
    MergeSort(arr, low, high);
}

int main()
{
    int arr[] = {5, 2, 9, 1, 8};
    int n = sizeof(arr)/sizeof(int);

    Sort(arr, n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}