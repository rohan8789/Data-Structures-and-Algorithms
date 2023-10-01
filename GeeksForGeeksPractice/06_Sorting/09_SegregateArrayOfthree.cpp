#include<bits/stdc++.h>
using namespace std;

//DUTCH NATIONAL FLAG ALGORITHM
void seg(int *arr, int n)
{
    int l=0, h=n-1;
    int m=0;
    while(m<=h)
    {
        if(arr[m]==0)
        {
            swap(arr[l], arr[m]);
            l++;m++;
        }
        else if(arr[m]==1)
        {
            m++;
        }
        else{
            swap(arr[m], arr[h]);
            h--;
        }
    }
}

int main()
{
    int arr[]={0,1,0,2,1,2};
    int n=sizeof(arr)/sizeof(int);
    seg(arr, n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}