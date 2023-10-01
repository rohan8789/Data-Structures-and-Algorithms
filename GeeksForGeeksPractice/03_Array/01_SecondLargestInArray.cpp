#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {81, 81, 19, 81, 12, 18};
    int n = sizeof(arr)/sizeof(int);
    int m1=INT_MIN;
    int m2=INT_MIN;
    int x=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>m1)
        {
            m2=m1;
            m1=arr[i];
            x=arr[i];
        }
        else if(arr[i]>m2 && arr[i]!=m1)
        {
            m2=arr[i];
        }
    }
    cout<<m1<<" "<<m2<<endl;
return 0;
}