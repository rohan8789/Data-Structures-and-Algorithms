//Power of a number
#include<bits/stdc++.h>
using namespace std;

int Power(int x, int n)
{
    if(n==0)
        return 1;
    else if(n%2==0)
    {
        int y = Power(x, n/2);
        return y*y;
    }
    else{
        return x*Power(x, n-1);
    }
}

int main()
{
    int x, n;
    cin>>x>>n;
    int ans = Power(x, n);
    cout<<ans<<endl;
return 0;
}