#include<bits/stdc++.h>
using namespace std;

int power(int x, int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return x;
    int temp = power(x, n/2);
    temp=temp*temp;
    if(n%2==0)
        return temp;
    else
        return temp*x;
}

int main()
{
    int x=3, n=5;
    int ans=power(x,n);
    cout<<ans;

return 0;
}