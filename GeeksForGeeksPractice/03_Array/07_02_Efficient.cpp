#include<bits/stdc++.h>
using namespace std;

vector<int> Leader(int *arr, int n)
{
    vector<int> v;
    int m=arr[n-1];
    v.push_back(arr[n-1]);
    for(int i=n-2; i>=0; --i)
    {
        if(m<arr[i])
        {
            m=arr[i];
            v.push_back(m);
        }
    }
    reverse(v.begin(), v.end());
    return v;
}

int main()
{
    int arr[] = {7,10,4,10,6,5,2};
    int n = sizeof(arr)/sizeof(int);
    vector<int> a = Leader(arr, n);
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }

return 0;
}