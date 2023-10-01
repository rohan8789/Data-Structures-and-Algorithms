#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum;
    cin>>n>>sum;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int low=0;
    int high = n-1;
    for(int i=1; i<n-2;)
    {
       if(arr[i]+arr[low]+arr[high]==sum)
       {
            cout<<arr[i]<<" "<<arr[low]<<" "<<arr[high]<<endl;
            low++; high--;
            i++;
       }
       else if(arr[i]+arr[low]+arr[high]<sum)
       {
           i++;low++;
       }
       else{
           high--;
       }
    }
return 0;
}