//find minimum maximum element of an array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(max<v[i])
            max=v[i];
        if(min>v[i])
            min=v[i];
    }
    cout<<max<<" "<<min<<endl;
return 0;
}