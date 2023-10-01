#include<bits/stdc++.h>
using namespace std;

int Naive(int *arr, int *brr, int n, int p)
{
    int res=0;
    
    for(int i=0; i<n; i++)
    {
        bool ans=false;
        for(int j=0; j<i; j++)
        {
            if(arr[j]==arr[i])
            {
                ans=true;
                break;
            }
        }
        if(ans==true)
            continue;
        // if(arr[i]!=-1)
        // {
            for(int j=0; j<p; j++)
            {
                if(arr[i]==brr[j])
                {
                    cout<<arr[i]<<" "<<brr[j]<<endl;
                    res++;
                    arr[j]=-1;
                    break;
                }
            }
        //}
    }
    return res;
}

int main()
{
    int arr[]={10,15,20,15,30,30,5};
    int n=sizeof(arr)/sizeof(int);
    int arr1[]={30,5,30,80};
    int m=sizeof(arr1)/sizeof(int);
    int ans=Naive(arr,arr1,n,m);
    cout<<ans<<endl;
return 0;
}