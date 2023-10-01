#include<bits/stdc++.h>
using namespace std;

int posOfRightMostDiffBit(int m, int n)
{
    // Your code here
    int z = max(m, n);
    int c=0;
    while(z>=1)
    {
        if(m%2!=0 && n%2!=0 || m%2==0 && n%2==0)
        {
            c++;
        }
        else{
            break;
        }
        m=m/2;
        n=n/2;
    }
    return c+1;
}

int main()
{
    int m=11, n=9;
    int ans = posOfRightMostDiffBit(m, n);
    cout<<ans<<endl;
return 0;
}