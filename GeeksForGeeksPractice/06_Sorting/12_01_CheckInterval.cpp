#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,int> p1{5,10};
    pair<int,int> p2{1,7};
    int z = max(p1.first, p2.first);
    int x = min(p1.second, p2.second);
    cout<<x<<" "<<z<<endl;
    for(int i=z; i<=x; i++)
    {
        cout<<i<<endl;
    }
return 0;
}