#include<bits/stdc++.h>
using namespace std;

void SearchInConstantTime(int *arr, int n, int k)
{
    unordered_map<int,int> m;
    for(int i=0; i<n; i++)
    {
        m.insert({arr[i], i});
    }
    for(auto it=m.begin(); it!=m.end(); it++)
    {
        if(it->first==k)
        {
            cout<<"Element "<<it->first<<" is found at index "<<it->second<<endl;
        }
    }
}


int main()
{
    cout<<endl<<endl;
    int arr[]={8,6,3,20,5,4};
    int n=sizeof(arr)/sizeof(int);
    int k=20;
    cout<<"Given Array: ";
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Using extra Space we can search in constant time"<<endl;
    SearchInConstantTime(arr,n, k);
    cout<<endl<<endl;
return 0;
}