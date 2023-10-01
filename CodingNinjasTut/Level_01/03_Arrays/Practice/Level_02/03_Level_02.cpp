#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum, count=0;
    cin >> n >> sum;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   // int c[10] = {0};
   unordered_map<int,int>c;
    for (int i = 0; i < n; i++)
    {
        c[arr[i]]++;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (sum - arr[i] != 0)
        {
            if (c[sum - arr[i]] != 0)
            {
                cout << arr[i] << ", " << sum - arr[i] << endl;
                c[arr[i]]--;
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}