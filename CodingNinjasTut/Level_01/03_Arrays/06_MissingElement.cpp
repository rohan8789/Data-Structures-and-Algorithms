#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d;
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    d= arr[0]-0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]-i!=d)
        {
            cout<<i+d<<endl;
            break;
        }
    }
return 0;
}