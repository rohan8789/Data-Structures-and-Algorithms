#include<bits/stdc++.h>
using namespace std;

int fact(int x)
{
    if(x==0 || x==1)
    {
        return 1;
    }
    return fact(x-1)*x;
}

int main()
{
    int n;
    cin>>n;
    int z = fact(n);
    cout<<z;
return 0;
}