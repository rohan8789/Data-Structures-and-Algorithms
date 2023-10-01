#include<bits/stdc++.h>
using namespace std;

int MaxConsecutiveOnes(int *arr, int n)
{
    int ans=0, z,j;
    bool x=false;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==1)
        {
            if(arr[i]==arr[i+1])
            {
                j=i;
                while(arr[i]==arr[j])
                {
                    j++;
                }
                z=j-i;
                i=j-1;
                // cout<<z<<endl;
                if(z>ans)
                {
                    ans=z;
                }
            }
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1,1,1};
    int n=sizeof(arr)/sizeof(int);
    int ans=MaxConsecutiveOnes(arr, n);
    cout<<ans<<endl;
return 0;
}