#include<bits/stdc++.h>
using namespace std;

int efficient(int *arr, int n)
{
    unordered_map<int,int> m;
    for(int i=0; i<n; i++)
    {
        m[arr[i]]++;
    }
    int c=1,res=1;
    for(auto i=m.begin(); i!=m.end(); i++)
    {
        int k=i->first;
        c=1;
        if(m.find(k-1)==m.end())
        {
            c=1;
            while(m.find(k+c)!=m.end())
            {
                c++;
            }
        }
        res=max(res,c); 
    }
    return res;
}

int main()
{
    int arr[]={1,9,3,10,4,20,2};
    int n=sizeof(arr)/sizeof(int);
    int ans=efficient(arr ,n);
    cout<<ans<<endl;
return 0;
}