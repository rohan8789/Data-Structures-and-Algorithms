#include<bits/stdc++.h>
using namespace std;


bool givenSumSubArray(int *arr, int n, int s)
{
    for(int i=0; i<n; i++)
    {
        int sum=0;
        for(int j=i; j<n; j++)
        {
            sum+=arr[j];
            if(sum==s)
            {
                cout<<sum<<endl;
                return true;
            }
        }
    }
    return false;
}


int main()
{
    int arr[] = {5,8,6,13,3,-1};
    int n=sizeof(arr)/sizeof(int);
    bool ans=givenSumSubArray(arr,n, 22);
    if(ans==true)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
return 0;
}