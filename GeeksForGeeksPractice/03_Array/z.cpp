#include<bits/stdc++.h>
using namespace std;

void Solution(int *arr1, int *arr2, int n)
{
    if(n<=0)
        return;
    int l=0;
    int h=n-1;
    Sort(arr1, arr2, l, h);
}

void Sort(int *arr1,int *arr2, int l, int h)
{
    if(l<h)
    {
        Sort(arr1, arr2, l, h);
    }
}

void merge(int *arr1, int *arr2, int n)
{
    int i=0,j=0,k=0;
    int c[2*n];
    while(i<=n && j<=n)
    {
        if(arr1[i]<arr2[j])
        {
            c[k]=arr1[i];
            k++;i++;
            c[k]=arr2[j];
            k++;j++;
        }
        else
        {
            c[k] = arr2[j];
            k++;j++;
            c[k]=arr1[i];
            k++;i++;
        }
    }
    for(int m=0; m<2*n; m++)
    {
        cout<<c[m]<<" ";
    }
}
 
// Driver program to test above function
int main()
{
    
    int n;
    cin>>n;
    int *arr1=new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }
    int *arr2=new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr2[i];
    }
    Solution(arr1, arr2, n);

    return 0;
}