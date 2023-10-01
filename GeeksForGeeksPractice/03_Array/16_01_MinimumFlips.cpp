#include<bits/stdc++.h>
using namespace std;

void MinimumFlip(int *arr, int n)
{
    int c=0,d=0, x=0,y=0;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==arr[i+1])
        {
            continue;
        }
        else if(arr[i]==1)
        {
            c++;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]==arr[i+1])
        {
            continue;
        }
        else if(arr[i]==0)
        {
            d++;
        }
    }
    cout<<c<<" "<<d<<endl;
    if(c>d)
    {
        int i;
        for(i=0; i<n; i++)
        {
            if(arr[i]==arr[i+1])
            {
                continue;
            }
            else if(arr[i]==0)
            {
                arr[i]=1;
                v.push_back(i);
            }
        }
            v.push_back(x-i);
            // cout<<x<<endl;
    }
    else{
        int i;
        for(i=0; i<n; i++)
        {
            if(arr[i]==arr[i+1])
            {
                continue;
            }
            else if(arr[i]==1)
            {
                arr[i]=0;
                v.push_back(i);
            }
        }
    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
}


int main()
{
    int arr[]={1,0,0,0,1,0,0,1,1,1,1};
    int n=sizeof(arr)/sizeof(int);
    MinimumFlip(arr, n);
return 0;
}