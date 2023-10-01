#include<bits/stdc++.h>
using namespace std;

int Naive(int *arr, int *brr, int n, int m)
{
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        v.push_back(arr[i]);
    }
    for(int i=0; i<m; i++)
    {
        v.push_back(brr[i]);
    }
    int res=0;
    for(int i=0; i<v.size(); i++)
    {
        int j;
        for(j=0; j<i; j++)
        {
            if(v[i]==v[j])
                break;
        }
        if(i==j)
        {
            cout<<v[i]<<" ";
            res++;
        }
    }
    return res;
}

int main()
{
    int arr[]={10,15,20,15,30,30,5};
    int n=sizeof(arr)/sizeof(int);
    int brr[]={30,5,30,80};
    int m=sizeof(brr)/sizeof(int);
    int ans=Naive(arr,brr,n,m);
    cout<<endl<<ans<<endl;
return 0;
}