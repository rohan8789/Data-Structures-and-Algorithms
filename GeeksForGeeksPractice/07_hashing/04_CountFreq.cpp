#include<bits/stdc++.h>
using namespace std;

int Naivef(int *arr, int n)
{
    int count;
    for(int i=0; i<n-1; i++)
    {
        count=1;
        if(arr[i]!=-1)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    arr[j]=-1;
                }
            }
            if(count>=1)
            {
                cout<<arr[i]<<": "<<count<<endl;
            }
        }
    }
    return count;
}

int freq(int arr[], int n)
{
    unordered_map<int,int> m;
    for(int i=0; i<n; i++)
    {
        m[arr[i]]++;
    }
    for(auto it:m)
    {
        cout<<it.first<<": "<<it.second<<endl;
    }
    return 0;
}

int main()
{
    int arr[]={10,12,10,15,10,20,12,12};
    int n=sizeof(arr)/sizeof(int);
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
    //int ans=Naivef(arr, n);
    //cout<<ans<<endl<<endl<<endl;
    int ans1=freq(arr, n);
    cout<<ans1<<endl;
return 0;
}