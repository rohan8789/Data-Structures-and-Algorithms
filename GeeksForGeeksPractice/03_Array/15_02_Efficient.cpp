//THis can be done in O(n) time and O(n) space. 
//Do it in O(n) time and O(1) space;
#include<bits/stdc++.h>
using namespace std;

int Majority(int *arr, int n)
{
    int res=0,c=1;
    for(int i=1; i<n; i++)
    {
        if(arr[res]==arr[i])
        {
            c++;
        }
        else{
            c--;
        }
        if(c==0)
        {
            res=i;
            c=1;
        }
    }
    c=0;
    cout<<res<<" "<<c<<endl;
    for(int i=0; i<n; i++)
    {
        if(arr[res]==arr[i])
        {
            c++;
        }
    }
    if(c<=n/2){
        return -1;
    }
    return c;
}

int main()
{
    int arr[]={8,7,6,8,6,6,6,6};
    int n=sizeof(arr)/sizeof(int);
    int ans=Majority(arr,n);
    cout<<ans<<endl;
return 0;
}