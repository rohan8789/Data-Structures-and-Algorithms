#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n, sum, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cin >> sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (sum == v[i] + v[j] + v[k])
                {
                    count++;
                    cout << "(" << v[i] << ", " << v[j] << ", " << v[k] << ")" << endl;
                }
            }
        }
    }
    if (count == 0)
    {
        cout << "No pair" << endl;
    }
    return 0;
}