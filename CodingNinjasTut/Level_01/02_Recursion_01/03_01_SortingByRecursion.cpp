#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    for(int i=0; i<n; i++)
    {
        reverse(arr, arr+i);
        reverse(arr+i, arr+n);
        reverse(arr, arr+n);
    }
    cout<<endl;
return 0;
}