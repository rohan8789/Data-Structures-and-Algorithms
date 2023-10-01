#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    // Your logic here
    int c = 0;
    int x;
    while(n)
    {
        x=n;
        while (x >= 1)
        {
            if (x % 2 == 1)
            {
                c++;
            }
            x = x / 2;
        }
        n--;
    }
    return c;
}

int main()
{
    int n = 4;
    int ans= countSetBits(n);
    cout<<ans<<endl;
    return 0;
}