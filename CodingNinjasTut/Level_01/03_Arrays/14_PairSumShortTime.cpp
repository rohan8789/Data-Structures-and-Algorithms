#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n, sum;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    //sort(v.begin(), v.end());
    cin>>sum;
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(v[i]+v[j]==sum)
        {
            cout<<v[i]<<"+"<<v[j]<<"="<<sum<<endl;
            i++;
            j--;
        }
        else if(v[i]+v[j]<sum)
        {
            i++;
        }
        else{
            j--;
        }
    }
return 0;
}    