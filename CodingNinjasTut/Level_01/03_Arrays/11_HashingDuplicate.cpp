//sorted

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

    int H[n] = {0};
    for(int i=0; i<n; i++)
    {
        H[arr[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        if(H[i]>1)
        {
            cout<<i<<" "<<H[i]<<endl;
        }
    }
return 0;
}