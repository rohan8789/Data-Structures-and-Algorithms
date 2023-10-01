#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, count=0;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    vector<int> c={0};
    for(int i=0; i<n; i++)
    {
        c[arr[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        if(c[i]>1)
        {
            count++;
            cout<<i<<endl;
        }
    }
    if(count==0)
    {
        cout<<"-1"<<endl;
    }
return 0;
}