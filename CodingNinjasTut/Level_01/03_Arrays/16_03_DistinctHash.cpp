#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int arr[n+1] = {0};
    for(int i=0; i<n; i++)
    {
        arr[a[i]]++;
    }
    for(int i=0; i<=n; i++)
    {
        if(arr[i]>0)
        {
            cout<<i<<endl;
        }
    }
return 0;
}