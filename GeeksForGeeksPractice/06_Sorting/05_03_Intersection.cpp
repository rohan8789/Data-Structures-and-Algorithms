#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3};
    int b[] = {1, 1, 1, 1, 3, 3, 3, 3, 3, 5, 7};
    int n = sizeof(a) / sizeof(int);
    int m = sizeof(b) / sizeof(int);
    int i = 0;
    int j = 0;
    vector<int> v;
    while (i < n && j < m)
    {
        if(i>0 && a[i]==a[i-1])
        {
            i++;
            continue;
        }
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            v.push_back(a[i]);
            i++;
            j++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}