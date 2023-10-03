#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, b;
    cin >> l >> b;
    int a = l * b;
    int b = 2 * (l + b);
    if (a > b)
    {
        cout << "Area" << endl;
        cout << a << endl;
    }

    else if (b > a)
    {
        cout << "Peri" << endl;
        cout << b << endl;
    }
    else
        cout << "Eq" << endl;

    return 0;
}