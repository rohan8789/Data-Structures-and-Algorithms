#include<bits/stdc++.h>
using namespace std;

void Equilibrium(int *arr,int n)
{
    int sum=0;
    for(int i=1; i<n; i++)
    {
        sum=sum+arr[i];
    }
    int l_sum=0;
    for(int i=0; i<n; i++)
    {
        if(l_sum==sum-arr[i])
        {
            cout<<i<<" "<<l_sum<<endl;
        }
        l_sum=l_sum+arr[i];
        sum=sum-arr[i];
    }
    cout<<endl;
   
}


int main()
{
    int arr[]={3,4,8,-9,20,6};
    int n=sizeof(arr)/sizeof(int);
    Equilibrium(arr,n);
return 0;
}