#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        int i = 2;
        int coin=0;
        while (i <= k)
        {
            if (n % i > coin)
            {
                coin = n%i;
            }
            i++;
        }
        cout<<coin<<endl;
    }
    return 0;
}