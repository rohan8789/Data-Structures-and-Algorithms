#include<bits/stdc++.h>
using namespace std;

vector<int> Naive(int *arr, int n)
{
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(arr[i]+arr[j]==0)
            {
                if(arr[i]>-arr[i]){
                    v.push_back(-arr[i]);
                    v.push_back(arr[i]);
                }
                else{
                    v.push_back(arr[i]);
                    v.push_back(-arr[i]);
                }
            }
        }
    }
    return v;
}

int main()
{
    int arr[]={1,-3,2,3,6,-1};
    int n=sizeof(arr)/sizeof(int);
    vector<int> ans=Naive(arr,n);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
return 0;
}