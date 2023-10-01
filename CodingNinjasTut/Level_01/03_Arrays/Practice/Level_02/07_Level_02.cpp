#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    unordered_map<int, int> m;
    int x;
    for(int i=0; i<n; i++)
    {
        m[arr[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        if(m[arr[i]]<=1)
        {
            x=i;
            break;
        }
        else{
            x=0;
        }
    }
    cout<<x<<endl;
return 0;
}