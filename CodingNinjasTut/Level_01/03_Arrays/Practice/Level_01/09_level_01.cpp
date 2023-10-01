#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<double>v;
    double n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        double x;
        cin>>x;
        v.push_back(x);
    }
    double max = INT_MIN;
    double min = INT_MAX;
    for(int i=0; i<v.size(); i++){
        if(max<v[i])
            max=v[i];
        if(min>v[i])
            min=v[i];
    }

    double range = max-min;
    double coff = (max-min)/(max+min);
    cout<<range<<" "<<coff<<endl;
return 0;
}