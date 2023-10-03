//sum of two smallest elements of an array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        for(int i=0; i<n; i++)
        {
            if(arr[i]<min2)
            {
                min1 = min2;
                min2 = arr[i];
            }
            if(arr[i]<min2 && min1!=arr[i])
            {
                min2=arr[i];
            }
        }
        cout<<min1+min2<<endl;
    }
return 0;
}