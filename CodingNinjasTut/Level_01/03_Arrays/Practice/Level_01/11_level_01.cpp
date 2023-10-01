//Union of unsorted array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k=0, i=0, j=0;
    int arr[]= {1,2,3,4};
    int arr1[] = {3, 4, 5, 6};
    int m = sizeof(arr)/sizeof(int);
    int n = sizeof(arr1)/sizeof(int);
    int c[4];

    while(i<m&&j<n)
    {
        if(arr[i]<arr1[j])
        {
            c[k]=arr[i];
            k++;i++;
        }
        else 
        {
            c[k]=arr1[j];
            k++;j++;
        }
    }
    while(i<m)
    {
        c[k]=arr[i];
        k++;i++;
    }

    while(j<n)
    {
        c[k]=arr1[j];
        k++;j++;
    }

    for(int i=0; i<m+n; i++)
    {
        arr[i]=c[i];
    }
    for(int i=0; i<m+n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}