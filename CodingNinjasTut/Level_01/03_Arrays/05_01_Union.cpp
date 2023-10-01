#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin>>m>>n;
    int *A = new int[m];
    for(int i=0; i<m; i++)
    {
        cin>>A[i];
    }
    int *B = new int[n];
    for(int j=0; j<n; j++)
    {
        cin>>B[j];
    }

    int *c = new int[m+n];

    int i=0, j=0, k=0;
    while(i<m && j<n)
    {
        if(A[i]<B[j])
        {
            c[k] = A[i];
            k++;i++;
        }
        else if(A[i]==B[j])
        {
            c[k]=A[i];
            k++;i++;j++;
        }
        else{
            c[k]=B[j];
            k++;j++;
        }
    }
    while(i<m)
    {
        c[k]=A[i];
        k++;i++;
    }
    while(j<n)
    {
        c[k]=B[j];
        k++;j++;
    }
    for(i=0; i<n+m; i++)
    {
        cout<<c[i]<<" ";
    }
return 0;
}