//sort 0s, 1s, 2s
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

    int f=0, s=0, t=0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]==0)
            f++;
        else if(v[i]==1)
            s++;
        else{
            t++;
        }
    }
    for(int i=0; i<f; i++)
    {
        v[i]=0;
    }
    for(int i=f; i<f+s; i++)
    {
        v[i]=1;
    }
    for(int i = f+s; i<v.size(); i++)
    {
        v[i]=2;
    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

return 0;
}