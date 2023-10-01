#include<bits/stdc++.h>
using namespace std;

int MaximumDiff(int *arr, int n)
{
    int ans;
    int newAns=arr[1]-arr[0];
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            ans = arr[j]-arr[i];
            if(ans>newAns)
            {
                newAns=ans;
            }
        }
    }
    return newAns;
}

int main()
{
    int arr[] = {30,20,8,2};
    int n = sizeof(arr)/sizeof(int);
    int ans = MaximumDiff(arr, n);
    cout<<ans<<endl;
return 0;
}