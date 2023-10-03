#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, on, sum = 0;
        cin>>n;
        on = n;
        while(n!=0)
        {
            int rem = n%10;
            sum = sum*10+rem;
            n=n/10;
        }
        if(sum==on)
        {
            cout<<"wins"<<endl;
        }
        else
        {
            cout<<"losses"<<endl;
        }
    }
return 0;
}