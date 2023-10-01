#include<bits/stdc++.h>
using namespace std;

bool givenSumSubArray(int *arr, int n, int su)
{
    unordered_set<int> s;
    int pre_sum=0;
    for(int i=0; i<n; i++)
    {
        pre_sum+=arr[i];
        if(pre_sum==su)
        {
            cout<<pre_sum<<endl;
            return true;
        }
        if(s.find(pre_sum-su)!=s.end()){
            cout<<i<<endl;
            return true;
        }
        s.insert(pre_sum);
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