#include <bits/stdc++.h>
using namespace std;

class sorting
{
public:
    int ss;
    bool comp(int a, int b)
    {
        if (abs(a - ss) > abs(b - ss))
        {
            return true;
        }
        return false;
    }

    void sortabs(int arr[], int n, int k)
    {
        ss = k;
        stable_sort(arr, arr + n, comp);
    }
};

int main()
{
    sorting s;
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    s.sortabs(arr, n, k);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i]<<" ";
    // }

    for (int &val : arr)
    {
        cout << val << " ";
    }
    return 0;
}