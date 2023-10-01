#include<bits/stdc++.h>
using namespace std;

int efficient(int *arr, int n, int k)
{
    unordered_map<int,int> m;
    int pre_sum=0, j=0;
    for(int i=0; i<n; i++)
    {
        pre_sum+=arr[i];
        if(pre_sum==k)
        {
            j=i+1;
        }
        if(m.find(pre_sum)==m.end())
        {
            m[pre_sum]=i;
        }
        if(m.find(pre_sum-k)!=m.end())
        {
            j= max(j, m[pre_sum-k]);
        }
    }
    return j;
}


int main()
{
    int arr[]={3,1,0,1,8,2,3,6};
    int n=sizeof(arr)/sizeof(int);
    int ans=efficient(arr, n, 5);
    cout<<ans<<endl;
return 0;
}