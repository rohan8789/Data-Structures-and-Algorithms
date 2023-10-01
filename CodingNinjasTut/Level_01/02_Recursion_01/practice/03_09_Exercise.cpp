//if x==last_index return 4;
// if x==l-1 index return 3
// other element -1;
//if leftArray othr than arr[0] is checked then check for arr[0]



#include<bits/stdc++.h>
using namespace std;

int lastIndex(int *arr, int n, int k)
{
    if(n<0)
        return -1;
    if(arr[n-1]==k)
        return n-1;
    else
        return lastIndex(arr, n-1, k);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int *arr =new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int z = lastIndex(arr, n, k);
    cout<<z<<endl;
    }
return 0;
}