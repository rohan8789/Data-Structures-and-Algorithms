#include<bits/stdc++.h>
using namespace std;

int fun1(int, int);
int fun2(int, int);

int fun1(int m, int n)
{
    if(n==0)
        return 1;
    return fun1(m, n-1)*m;
}

int fun2(int p, int q)
{
    if(q==0)
        return 1;
    if(q%2==0)
        return fun2(p*p, q/2);
    else
        return fun2(p*p, (q-1)/2)*p;
}

int main()
{
    int a, b;
    cin>>a>>b;
    int x = fun1(a, b);
    int y = fun2(a, b);
    cout<<x<<" "<<y;
return 0;
}