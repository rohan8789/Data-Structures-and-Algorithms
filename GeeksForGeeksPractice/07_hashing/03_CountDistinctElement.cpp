#include<bits/stdc++.h>
using namespace std;

int count(int *arr, int n)
{
    unordered_set<int> s;
    for(int i=0; i<n; i++)
    {
        s.insert(arr[i]);
    }
    return s.size();
}

//more improved
int count1(int *arr, int n)
{
    unordered_set<int> s(arr, arr+n);
    return s.size();
}

int main()
{
    int arr[]={15,12,13,12,13,13,18};
    int n=sizeof(arr)/sizeof(int);
    int ans=count1(arr, n);
    cout<<ans<<endl;
return 0;
}