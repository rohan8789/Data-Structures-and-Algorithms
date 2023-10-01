#include<bits/stdc++.h>
using namespace std;

vector<int> ceil(int *arr, int n)
{
    vector<int> v;
    set<int> s;
    s.insert(arr[0]);
    v.push_back(-1);
    for(int i=1; i<n; i++)
    {
        auto it=s.lower_bound(arr[i]);
        if(it!=s.end())
        {
            v.push_back(*it);
        }
        else{
            v.push_back(-1);
        }
        s.insert(arr[i]);
    }
    return v;
}

int main()
{
    int arr[]={2,8,30,15,25,12};
    int n=sizeof(arr)/sizeof(int);
    vector<int> ans=ceil(arr, n);
    cout<<ans.size()<<endl<<endl;
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
return 0;
}