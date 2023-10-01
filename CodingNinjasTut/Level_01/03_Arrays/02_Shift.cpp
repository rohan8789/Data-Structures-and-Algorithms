#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d;
    cin >> d;

    for (int i = 0; i < d; i++)
    {
        int j, t = arr[0];
        for (j = 0; j < n; j++)
        {
            arr[j - 1] = arr[j];
        }
        arr[n - 1] = t;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}