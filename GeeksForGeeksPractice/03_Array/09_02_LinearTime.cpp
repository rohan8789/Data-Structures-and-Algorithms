#include<bits/stdc++.h>
using namespace std;

void freq(int *arr, int n)
{
    int count=0;
    int j;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==arr[i+1])
        {
            j=i;
            while(arr[j]==arr[i])
            {
                j++;
            }
            cout<<arr[i]<<" found "<<j-i<<" Times"<<endl; 
            i=j-1;
        }
    }
}

int main()
{
    int arr[] = {10, 25, 10, 10, 4, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    freq(arr, n);
return 0;
}