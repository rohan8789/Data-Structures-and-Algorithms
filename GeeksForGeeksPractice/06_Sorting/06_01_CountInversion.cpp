#include<bits/stdc++.h>
using namespace std;

void count(int *arr, int n)
{
    int res=0;
    int f=0;
    for(int i=0; i<n-1; i++)
    {
        f=0;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                f++;
            }
        }
        res=res+f;
    }
    cout<<res<<endl;
}

int main()
{
    int arr[]={40,30,20,10};
    int n=sizeof(arr)/sizeof(int);
    count(arr, n);
return 0;
}