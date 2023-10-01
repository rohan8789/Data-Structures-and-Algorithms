#include <bits/stdc++.h>
using namespace std;

bool checkKthBit(int n, int k)
{
    bool d = 0, f = 0;
    int c = 0;
    while (n >= 1)
    {
        c++;
        if (n % 2 == 1)
        {
            f = 1;
        }
        else
        {
            f = 0;
        }
        if ((c - 1) == k && f == 1)
        {
            d = 1;
        }
        n = n / 2;
    }
    if (d == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n = 12, k = 3;
    checkKthBit(n, k);
    return 0;
}