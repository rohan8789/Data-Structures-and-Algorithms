#include<bits/stdc++.h>
using namespace std;

vector<int> countNbyK(int *arr, int n, int k)
{
    int count, j=1;
    vector<int> v;
    sort(arr, arr+n);
    for(int i=1; i<n; i++)
    {
        count=1;
        while(arr[i]==arr[i-1])
        {
            count++;
            i++;
        }
        //cout<<count<<endl;
        if(count>n/k)
        {
            //cout<<arr[i-1]<<endl;
            v.push_back(arr[i-1]);
        }
    }
    return v;
}

int main()
{
    int arr[]={30,10,20,20,10,20,30,30};
    int n=sizeof(arr)/sizeof(int);
    vector<int> ans=countNbyK(arr, n, 4);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
return 0;
}