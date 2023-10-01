#include<bits/stdc++.h>
using namespace std;

int power(int m, int n);
int power1(int x, int y);

int power(int m, int n)
{
    if(n==0)
        return 1;
    return power(m, n-1)*m;
}

int power1(int x, int y)
{
    if(y==0)
        return 1;
    if(y%2==0)
        return power1(x*x, y/2);
    return x*power1(x*x, (y-1)/2);
}

int main()
{
    int a, b, c, d;
    cin>>a>>b;
    c = power(a, b);
    d = power1(a, b);
    cout<<c<<endl<<d;
return 0;
}