#include<bits/stdc++.h>
using namespace std;

int StockMaxProfit(int *arr, int start, int end)
{
    if(start>end)
        return 0;
    int profit=0;
    int curr_profit;
    for(int i=start; i<end; i++)
    {
        for(int j=i+1; j<=end; j++)
        {
            if(arr[j]>arr[i])
            {
                curr_profit = arr[j]-arr[i]+StockMaxProfit(arr, start, i-1)+ StockMaxProfit(arr, j+1, end);
                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}

int main()
{
    int arr[] = {1,5,3,8,12};
    int n = sizeof(arr)/sizeof(int);
    int ans =StockMaxProfit(arr, 0, n-1);
    cout<<ans<<endl;
return 0;
}