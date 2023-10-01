// Merge Sort Code
// Sort an array A using Merge Sort.
// Change in the input array itself. So no need to return or print anything.
// Input format :
// Line 1 : Integer n i.e. Array size
// Line 2 : Array elements (separated by space)
// Output format :
// Array elements in increasing order (separated by space)
// Constraints :
// 1 <= n <= 1000
// Sample Input:
// 6 
// 2 6 8 5 4 3
// Sample Output:
// 2 3 4 5 6 8

#include<bits/stdc++.h>
using namespace std;

void Merge(int *arr, int low, int mid, int high)
{
    for(int i=low; i<mid; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    for(int i=mid; i<=high; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=low;
    int j = mid+1;
    int k = low;
    int B[high+1];

    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j])
        {
            B[k]=arr[i];
            k++;
            i++;
        }
        else{
            B[k]=arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        B[k]=arr[i];
        k++; i++;
    }
    while(j<=high)
    {
        B[k]=arr[j];
        k++; j++;
    }
    for(int i=low; i<=high; i++)
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

void Sort(int *arr, int n)
{
    if(n==0)
        return;
    int low =0;
    int high = n-1;
    MergeSort(arr, low, high);

}

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
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