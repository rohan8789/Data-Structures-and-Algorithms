#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n], count =0, set=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            count++;
            else
            set++;
        }
        if(count>set)
        {
            cout<<"Ready";
        }
        else if(count == set)
        {
            cout<<"Not Ready";
        }
        else
        {
            cout<<"Not ready";
        }

    }
return 0;
}