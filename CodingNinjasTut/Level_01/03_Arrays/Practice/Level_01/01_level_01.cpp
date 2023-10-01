#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, x, count=0, count1=0;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>x>>k;
    for(int i=0; i<n; i=i+k)
    {
        for(int j=0; j<k; j++)
        {
            if(arr[i+j]%x==0)
            {
                count++;
            }
            if(arr[i+j]==x)
            {
                count1++;
                //cout<<"yes"<<endl;
            }
        }
    }
    if(count==count1)
    {
        cout<<"yes"<<endl;
    }    
    else{
        cout<<"no"<<endl;
    }
return 0;
}