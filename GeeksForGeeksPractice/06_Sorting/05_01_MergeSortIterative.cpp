#include<bits/stdc++.h>
using namespace std;

void MergeSort(int *arr, int low, int mid, int high)
{
    int i = low;
    int j = mid+1;
    int k = low;
    int c[100];
    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j])
        {
            c[k++]=arr[i++];
        }
        else{
            c[k++]=arr[j++];
        }
    }
    while(i<=mid)
    {
        c[k++]=arr[i++];
    }
    while(j<=high)
    {
        c[k++]=arr[j++];
    }
    for(i=low; i<=high; i++)
    {
        arr[i]=c[i];
    }
    
    
}

void Sort(int *arr, int n)
{
   
    int i;
    for(i=2; i<=n; i=i*2)
    {
        for(int j=0; j+i-1<n; j=j+i)
        {
            int low=j;
            int high = j+i-1;
            int mid = (low+high)/2;
            MergeSort(arr, low, mid, high);
        }
    }
    if(i/2<n){
        MergeSort(arr, 0, i/2-1, n-1);
    }

}

int main()
{
    int arr[] = {4, 9, 1, 5, 7, 8};
    int n = sizeof(arr)/sizeof(int);

    Sort(arr, n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}