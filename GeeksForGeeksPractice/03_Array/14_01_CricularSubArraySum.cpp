#include<bits/stdc++.h>
using namespace std;

int MaxCircularSum(int *arr, int n)
{
    int res=arr[0];
    int cur_sum, cur_max;
    for(int i=0; i<n; i++)
    {
        cur_sum=arr[i];
        cur_max=arr[i];
        for(int j=1; j<n; j++)
        {
            int index=(i+j)%n;
            cur_sum+=arr[index];
            cur_max=max(cur_max, cur_sum);
        }
        res=max(res,cur_max);
    }
    return res;
}

int main()
{
    int arr[]={8,-4,3,-5,4};
    int n=sizeof(arr)/sizeof(int);
    int ans = MaxCircularSum(arr, n);
    cout<<ans<<endl;
return 0;
}