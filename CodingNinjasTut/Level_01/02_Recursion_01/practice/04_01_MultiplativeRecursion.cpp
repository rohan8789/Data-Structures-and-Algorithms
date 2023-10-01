//Multiplicative recursion
//m*n
#include<bits/stdc++.h>
using namespace std;

int multiple(int m, int n)
{
    if(n<0)
    {
        return -1;
    }
    if(n==0||m==0)
    {
        return 0;
    }
    int ans = multiple(m, n-1);
    return m+ans;
}

int main()
{
    int m, n;
    cin>>m>>n;
    int z = multiple(m, n);
    cout<<z<<endl;
return 0;
}