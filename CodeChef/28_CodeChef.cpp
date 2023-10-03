//sum(4) = 1+2+3+4
#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n, d;
    cin>>n>>d;
    
    for(int i=0; i<=d; i++)
    {
        int sum=0;
        for(int j=0; j<=n; j++)
        {
            sum = sum+j;
        }
        n=sum;
    }
    cout<<n;
return 0;
}