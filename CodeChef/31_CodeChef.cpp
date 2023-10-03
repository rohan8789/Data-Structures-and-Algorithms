#include<bits/stdc++.h>
using namespace std;

int MaxTri(int x)
{

        x = x-2;
        x = floor(x/2);
        x = x*(x+1)/2;
    return x;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int base;
        cin>>base;

        int x = MaxTri(base);
        cout<<x<<endl;

    }
return 0;
}