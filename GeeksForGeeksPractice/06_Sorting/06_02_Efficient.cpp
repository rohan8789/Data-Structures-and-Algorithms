#include <bits/stdc++.h>
using namespace std;

void countMerge(int arr[], int l, int m, int h, int &c)
{
    long long i = l, j = m + 1, k = l;
    long long ch[h];
    while (i <= m && j <= h)
    {
        if (arr[i] <= arr[j])
        {
            ch[k++] = arr[i++];
        }
        else if (arr[i] > arr[j])
        {
            ch[k++] = arr[j++];
            c = c + (m - i + 1);
        }
    }
    while (i <= m)
    {
        ch[k++] = arr[i++];
    }
    while (j <= h)
    {
        ch[k++] = arr[j++];
    }
    for (int v = l; v <= h; v++)
    {
        arr[v] = ch[v];
    }
}

void count(int arr[], int l, int h, int &c)
{
    if (l < h)
    {
        int m = (l + h) / 2;
        count(arr, l, m, c);
        count(arr, m + 1, h, c);
        countMerge(arr, l, m, h, c);
    }
}

int Efficient(int arr[], int n)
{
    if (n <= 0)
        return 0;
    int l = 0;
    int h = n - 1;
    int c=0;
    count(arr, l, h, c);
    return c;
}

int main()
{
    int arr[] = {2, 4, 1, 3, 5};
    int n = sizeof(arr) / sizeof(int);
    int ans=Efficient(arr, n);
    cout<<ans<<endl;
    return 0;
}