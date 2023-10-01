#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3,4,4,5,5,5,6,7,9,9};
    int n = sizeof(arr)/sizeof(int);

    for(int i=0; i<n; i++)
    {
        if(arr[i]==arr[i+1])
        {
            continue;
        }
        cout<<arr[i]<<" ";
    }
return 0;
}