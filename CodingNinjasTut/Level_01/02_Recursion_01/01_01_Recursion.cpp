#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    int res = factorial(n-1);
    return n*res;
}

int main()
{
    long long int n;
    cin>>n;
    int res = factorial(n);
    cout<<res<<endl;
return 0;
}