//find frequency
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,count=0;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            count++;
        }
    }
    if(count!=0){
        cout<<count<<endl;
    }
return 0;
}