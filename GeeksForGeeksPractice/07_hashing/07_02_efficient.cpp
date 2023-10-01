#include<bits/stdc++.h>
using namespace std;

void pairSum(int *arr, int n, int sum)
{
    unordered_set<int> s;
    for(int i=0; i<n; i++)
    {
        if(s.find(sum-arr[i])!=s.end())
            cout<<arr[i]<<"+"<<sum-arr[i]<<"="<<sum<<endl;
        s.insert(arr[i]);
    }
}

int main()
{
    int arr[]={3,2,8,15,-8};
    int n=sizeof(arr)/sizeof(int);
    pairSum(arr,n, 17);
return 0;
}