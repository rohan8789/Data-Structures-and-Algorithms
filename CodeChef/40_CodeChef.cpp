//farmer feb
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, count;
        cin >> x >> y;
        int i, sum, j;
            for (i = 1; i <= 40; i++)
            {
                count = 0;
                sum = x + y + i;
                for (j = 2; j < sum; j++)
                {
                    if (sum % j == 0)
                    {
                        count++;
                    }
                }
                if (count == 0)
                {
                    cout << sum-(x+y) << endl;
                    break;
                }
            }
    }
    return 0;
}