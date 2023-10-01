#include<bits/stdc++.h>
using namespace std;

void Swap(int arr1[], int arr2[])
{
    int temp = *arr1;
    *arr1 = *arr2;
    *arr2 = temp;
}
int Partition(int *arr, int low, int high)
{
    int pivot = arr[high];
    int i=low-1;
    
    for(int j=low; j<high; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            Swap(&arr[i], &arr[j]);
        }
    }
    Swap(&arr[i+1], &arr[high]);
    
    return i+1;
}

void QuickSort(int *arr, int low,int high)
{
    if(low<high)
    {
        cout<<low<<" "<<high<<endl;
        int pivot=Partition(arr, low, high);
       
        QuickSort(arr, low, pivot-1);
        QuickSort(arr, pivot+1, high);
    }
}

void Sort(int *arr, int n)
{
    if(n==0)
        return;
    int low =0;
    int high = n-1;
    QuickSort(arr, low, high);
}

int main()
{
    int n;
    cin>>n;
    int *arr =new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    Sort(arr, n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}