#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    int i;
    double sum=0.0;
    for(i=1; i<=n; i++)
    {
        sum=sum+log10(i);
    }
    cout<<floor(sum)+1<<endl;
    //cout<<floor(log10(n))+1;
return 0;
}