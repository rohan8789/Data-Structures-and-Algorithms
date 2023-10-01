//Find kth largest and kth smallest element in an array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n, k;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cin>>k;
    sort(v.begin(), v.end());
    cout<<v[k-1]<<endl;
 
return 0;
}