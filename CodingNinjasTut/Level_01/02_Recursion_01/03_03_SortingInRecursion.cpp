#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
    if(n==1||n==0)
        return true;

    bool isLeftArraySorted = isSorted(arr+1, n-1);
    if(!isLeftArraySorted)
        return false;
    if(arr[0]>arr[1])
        return false;

    else
        return true;

}

int main()
{
    int n;
    cin>>n;
    int *arr =new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    bool ans = isSorted(arr, n);
    cout<<ans<<endl;
return 0;
}