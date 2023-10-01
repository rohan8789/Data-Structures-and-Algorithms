#include<bits/stdc++.h>
using namespace std;

vector<int> ceil(int *arr, int n)
{
    vector<int> v;
    v.push_back(-1);
    for(int i=1; i<n; i++)
    {
        int m=INT_MAX;
        for(int j=0; j<i; j++)
        {
            if(arr[j]>arr[i])
            {
                m=min(m, arr[j]-arr[i]);
            }
        }
        if(m==INT_MAX)
        {
            v.push_back(-1);
        }
        else{
            v.push_back(m+arr[i]);
        }
    }
    return v;
}

int main()
{
    int arr[]={6,18,4,5};
    int n=sizeof(arr)/sizeof(int);
    vector<int> ans=ceil(arr, n);
    cout<<ans.size()<<endl<<endl;
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
return 0;
}