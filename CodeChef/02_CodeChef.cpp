#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int count = 0;
    int m;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        if (m % k == 0)
        {
            count = count + 1;
        }
    }
    cout << count;
    return 0;
}