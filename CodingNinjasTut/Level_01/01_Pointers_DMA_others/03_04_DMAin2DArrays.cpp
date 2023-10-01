#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin>>m>>n;
    int **p = new int*[m];
    for(int i=0; i<m; i++)
    {
        p[i] = new int[i+1];//we can print all kinds of star pattern with this
        for(int j=n; j<n; j++)
        {
            cin>>p[i][j];
        }
    }

    //Way to delloacte it
    for(int i=0; i<m; i++)
        delete[] p[i];
    delete[] p;

return 0;
}