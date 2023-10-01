#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int m=1000;

vector<ll> visited(m+1, 1);
void least_prime(int n)
{
    for(ll i=2; i<=n; i++)
    {
        if(visited[i]==1)
        {
            visited[i]=i;
            for(ll j=i*i; j<=n; j=j+i)
            {
                if(visited[j]==1)
                {
                    visited[j]=i;
                }
            }
        }
        
    }
    
}

int main()
{
    int c, res=1;
    int n = 72;
    least_prime(n);
    int prev=visited[n];
    n=n/prev;
    c=1;
    while(n>1)
    {
        if(visited[n]==prev)
        {
            c++;
        }
        else{
            prev=visited[n];
            res=res*(c+1);
            c=1;
        }
        n=n/prev;
    }    
    res=res*(c+1);
    cout<<res<<" ";
    return 0;
}