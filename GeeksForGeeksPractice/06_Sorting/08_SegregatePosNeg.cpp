#include <bits/stdc++.h>
using namespace std;

void segregate(int *arr, int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 0)
        {
            swap(arr[res], arr[i]);
            res++;
        }
    }
}

int main()
{
    int arr[] = {18, -2, -3, 17};
    int n = sizeof(arr) / sizeof(int);
    segregate(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}