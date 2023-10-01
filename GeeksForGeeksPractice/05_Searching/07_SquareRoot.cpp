#include<bits/stdc++.h>
using namespace std;

int square(int x)
{
    int ans=0;
    int i=1;
    while(i*i<=x)
    {
       i++;
    }
    return i-1;
}

int efficient(int n)
{
    int ans;
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int m=(l+h)/2;
        int z=m*m;
        if(z==n)
        {
            ans=m;
        }
        if(m*m>n)
        {
            h=m-1;
        }
        else{
            l=m+1;
            ans=m;
        }
    }
    return ans;
}

int main()
{
    int x=15;
    // int ans=square(x);
    int ans=efficient(x);
    cout<<ans<<endl;
return 0;
}