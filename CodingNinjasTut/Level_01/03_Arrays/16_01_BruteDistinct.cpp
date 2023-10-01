#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = { 8, 6, 3, 15, 12, 3, 6, 15, 3};
    int n = sizeof(arr)/sizeof(int);

    int flag=0;
    for(int i=0; i<n; i++)
    {
        int j;
        for(j=0; j<i; j++)
        {
            if(arr[i]==arr[j])
                break;
        }
        if(i==j)
        {
            cout<<arr[i]<<" ";
        }
        
    }
return 0;
}