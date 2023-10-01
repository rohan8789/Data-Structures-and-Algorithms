//missing integer
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum=0, d;
    cin>>n;
    int*arr = new int[n];
    for(int i=0; i<n-1; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++)
    {
        sum+=arr[i];
    }

    d = n*(n+1)/2;
    cout<<d-sum;
    
return 0;
}