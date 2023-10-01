#include<bits/stdc++.h>
using namespace std;

void pairSum(int *arr, int n, int s)
{
    int sum=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            sum=arr[i]+arr[j];
            if(sum==s)
            {
                cout<<"yes"<<endl;
                cout<<arr[i]<<" "<<arr[j]<<endl;
                break;
            }
        }
    }
}

int main()
{
    int arr[]={3,2,8,15,-8};
    int n=sizeof(arr)/sizeof(int);
    pairSum(arr,n, 17);
return 0;
}