#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum,count=0;
    cin>>n>>sum;
    int *arr=new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    unordered_map<int,int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    for(int i=0; i<n; i++){
        if(sum-arr[i]!=0&&m[sum-arr[i]]!=0)
        {
            cout<<arr[i]<<" "<<sum-arr[i]<<endl;
            m[arr[i]]--;
            count++;
        }
    }
    cout<<count<<endl;
return 0;
}