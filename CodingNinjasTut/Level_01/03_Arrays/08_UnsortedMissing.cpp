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
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]-i!=v[0])
        {
            while(v[0]<v[i]-i)
            {
                cout<<v[0]+i<<endl;
                v[0]++;
            }
        }
    }
return 0;
}