//first occurance of a number in an aray
// 5 5 6 5 6  
//if arr[0] == your ans ----->0
//else 6------>2
//others----->-1
#include<bits/stdc++.h>
using namespace std;

int firstOccurance(int arr[], int n, int k)
{
    if(n<=0)
        return -1;
    if(arr[0]==k)
        return 0;
    if(arr[0]==k+1)
        return 2;
    
    int ans = firstOccurance(arr+1, n-1, k);
    if(ans==k||ans==k+1)
        return ans;
    return -1;
   
}

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int k;
    cin>>k;
    int ans = firstOccurance(arr, n, k);
    cout<<ans<<endl;
return 0;
}