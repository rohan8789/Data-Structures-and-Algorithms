#include<bits/stdc++.h>
using namespace std;

void MergeInSorted(int *arr, int l, int m, int h)
{
    int i=l;
    int j=m+1;
    int k=l;
    int left[h];

    while(i<=m && j<=h)
    {
        if(arr[i]<arr[j])
        {
            left[k++]=arr[i++];
        }
        else{
           left[k++]=arr[j++];
        }
    }
    while(i<=m)
    {
        left[k++]=arr[i++];
    }
    while(j<=h)
    {
        left[k++]=arr[j++];
    }
    
    for(int z=l; z<=h; z++)
    {
        cout<<left[z]<<" ";
    }
    
}

int main()
{
    int arr[]={2,4,6,8,1,3,5};
    int n=sizeof(arr)/sizeof(int);
    int l=0;
    int h=n-1;
    int m=(l+h)/2;
    //mid is such that arr[mid] should be the end of the left array and is sorted 
    cout<<m<<" "<<arr[m]<<endl;
    MergeInSorted(arr, l, m, h);
return 0;
}

