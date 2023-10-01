//Time COmplexity n(loglogn);
#include<bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    vector<bool> flag(n+1, true);
    for(int i=2; i*i<=n; i++)//all number till n
    {
        if(flag[i]==true)//we are checking only for prime values since 4 comes under multiple of 2
        {
            for(int j=i*i; j<=n; j=j+i) //checking multiple of i
            {
                flag[j]=false;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(flag[i]){
            cout<<i<<" ";
        }
    }
}

int main()
{
    int n=100;
    sieve(n);
return 0;
}