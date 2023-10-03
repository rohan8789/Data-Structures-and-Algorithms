#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        int rem, count =0, i=4;
        cin>>n;
        while(n!=0)
        {
            rem = n%10;
            if(rem == i)
            {
                count++;
            }
            n=n/10;
        }
        cout<<count;
    }
return 0;
}