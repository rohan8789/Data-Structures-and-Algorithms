#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[] = {8, 5, 2, 12};
    int B[] = {6, 3, 10, 4};
    int n = sizeof(A)/sizeof(int);
    int m = sizeof(B)/sizeof(int);
    cout<<n<<" "<<m<<endl;
    int k = 0;
    int *c = new int[n+m];
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (A[i] < B[j])
        {
            c[k] = A[i];
            k++;
            i++;
        }
        else
        {
            c[k] = B[j];
            k++;
            j++;
        }
    }
    while (i < n)
    {

        c[k] = A[i];
        k++;
        i++;
    }
    while (j < m)
    {

        c[k] = B[j];
        k++;
        j++;
    }

    for (i = 0; i < n+m; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}