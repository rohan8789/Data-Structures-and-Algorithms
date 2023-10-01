#include<bits/stdc++.h>
using namespace std;

vector<int> Leader(int *arr, int n)
{
    vector<int> v;
    bool flag;
    for(int i=0; i<n; i++)
    {
        flag=false;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]<=arr[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            v.push_back(arr[i]);
        }
    }
    return v;
}

int main()
{
    int arr[] = {7,10,4,10,6,5,2};
    int n = sizeof(arr)/sizeof(int);
    vector<int> a=Leader(arr, n);
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
return 0;
}