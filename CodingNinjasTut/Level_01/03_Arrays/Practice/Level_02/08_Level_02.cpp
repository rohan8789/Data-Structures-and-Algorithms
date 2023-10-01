#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(first<arr[i])
        {
            third=second;
            second = first;
            first=arr[i];
        }
        else if(second<arr[i])
        {
            third = second;
            second = arr[i];
        }
        else{
            third = arr[i];
        }
    }
    cout<<first<<" "<<second<<" "<<third<<endl;

return 0;
}