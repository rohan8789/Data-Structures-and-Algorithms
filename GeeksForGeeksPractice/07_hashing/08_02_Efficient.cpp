#include<bits/stdc++.h>
using namespace std;

bool efficient(int *arr, int n)
{
    unordered_set<int> s;
    int pre_sum=0;
    for(int i=0; i<n; i++)
    {
        pre_sum+=arr[i];
        if(s.find(pre_sum)!=s.end())
            return true;
            
        if(pre_sum==0)
            return true;

        s.insert(pre_sum);
    }
    return false;
}


int main()
{
    int arr[]={1,4,13,-3,-10,5};
    int n=sizeof(arr)/sizeof(int);
    bool ans=efficient(arr, n);
    if(ans)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
return 0;
}