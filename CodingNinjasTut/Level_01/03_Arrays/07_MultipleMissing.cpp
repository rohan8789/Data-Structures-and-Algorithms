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

    int d = arr[0]-0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]-i!=d)
        {
            while(d<arr[i]-i)
            {
                cout<<d+i<<endl;
                d++;
            }
        }
    }
return 0;
}