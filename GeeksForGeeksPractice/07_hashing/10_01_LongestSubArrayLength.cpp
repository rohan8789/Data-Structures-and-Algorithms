#include<bits/stdc++.h>
using namespace std;

int Naive(int *arr, int n, int s)
{
    int res=0;
    for(int i=0; i<n; i++)
    {
        int c=0;
        int sum=0;
        for(int j=i; j<n; j++)
        {
            sum+=arr[j];
            if(sum==s)
            {
                c=j-i;
            }
        }
        res=max(res,c);
    }
    return res+1;
}

int main()
{
    int arr[]={3,1,0,1,8,2,3,6};
    int n=sizeof(arr)/sizeof(int);
    int ans=Naive(arr, n, 5);
    cout<<ans<<endl;
return 0;
}