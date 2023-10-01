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
    int count=0, lastDuplicate=-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==arr[i+1] && arr[i]!=lastDuplicate)
        {
            count++;
            cout<<arr[i]<<endl;
            lastDuplicate=arr[i];
        }
    }
    if(count==0)
    {
        cout<<"No duplicate"<<endl;
    }
    else
    {
        cout<<"Count: "<<count<<endl;
    }
return 0;
}