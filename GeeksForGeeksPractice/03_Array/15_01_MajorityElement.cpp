#include<bits/stdc++.h>
using namespace std;

int Majority(int *arr, int n)
{
    int c;
    for(int i=0; i<n; i++)
    {
        c=1;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        cout<<c<<" "<<n/2<<" "<<i<<endl;
        if(c>n/2)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[]={20,30,40,50,50,50,50};
    int n=sizeof(arr)/sizeof(int);
    int ans=Majority(arr, n);
    cout<<ans<<endl;
return 0;
}