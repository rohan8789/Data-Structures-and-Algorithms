//sum of n natural number using recursion in cpp
#include<bits/stdc++.h>
using namespace std;

int sum(int x)
{
    if(x>0)
    {
        return sum(x-1)+x;
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    int a=sum(n);
    cout<<a;
return 0;
}