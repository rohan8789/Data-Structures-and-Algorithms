#include<bits/stdc++.h>
using namespace std;

int MaxProfit(int *arr, int n)
{
    int profit=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i+1]>arr[i]){
            profit=profit+arr[i+1]-arr[i];
        }
    }
    return profit;
}

int main()
{
    int arr[] = {1,5,3,8,12};
    int n = sizeof(arr)/sizeof(int);
    int ans =MaxProfit(arr, n);
    cout<<ans<<endl;
return 0;
}