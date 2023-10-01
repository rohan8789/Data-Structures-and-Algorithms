#include <bits/stdc++.h>
using namespace std;

bool mycmp(pair<int,int> &a, pair<int,int> &b)
{
    if(a.second==b.second)
        return a.first<b.first;
    return a.second>b.second;
}

int main()
{
    vector<int> res;
    int arr[] = {5, 5, 4, 6, 4};
    int n = sizeof(arr) / sizeof(int);
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    vector<pair<int,int>>v;
    for(auto it=m.begin(); it!=m.end(); it++)
    {
        v.push_back({it->first, it->second});
    }
    for(auto it=v.begin(); it!=v.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    sort(v.begin(), v.end(), mycmp);
    for(int i=0; i<v.size(); i++)
    {
        while(v[i].second--)
        {
            res.push_back(v[i].first);
        }
    }

    for(int i=0; i<res.size(); i++)
    {
        cout<<res[i]<<" ";
    }

    return 0;
}