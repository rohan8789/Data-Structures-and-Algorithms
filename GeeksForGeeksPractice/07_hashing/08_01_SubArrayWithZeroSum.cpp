#include<bits/stdc++.h>
using namespace std;

bool Naive(int *arr, int n)
{
    int cur_sum;
    for(int i=0; i<n; i++)
    {
        cur_sum=0;
        for(int j=i+1; j<n; j++)
        {
            cur_sum+=arr[j];
            if(cur_sum==0)
                return true;
        }
    }
    return false;
}

int main()
{
    int arr[]={1,4,13,-3,-10,5};
    int n=sizeof(arr)/sizeof(int);
    bool ans=Naive(arr, n);
    if(ans)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
return 0;
}