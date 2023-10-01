#include<bits/stdc++.h>
using namespace std;

int Hoare(int *arr, int n)
{
    int l=0;
    int h=n-1;
    int i=l-1, j=h+1;
    int pivot=arr[l];
    while(true)
    {
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);

        if(i>=j)
            return j;
        swap(arr[i], arr[j]);

    }
}

int main()
{
    int arr[]={5,3,8,4,2,7,1,10};
    int n=sizeof(arr)/sizeof(int);
    int ans=Hoare(arr, n);
    cout<<ans<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}