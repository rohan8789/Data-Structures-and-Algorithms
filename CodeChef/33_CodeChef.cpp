#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int bs;
        int gross;
        float change = (float)gross;
        cin>>bs;
        double hra, da;
        if(bs<1500)
        {
            hra = 0.1*bs;
            da = 0.9*bs;
            gross = bs + hra + da;
            if(gross%2==0)
            {
                cout<<gross<<endl;
            }
            else
            {
                cout<<fixed<<setprecision(2)<<gross<<endl;
            }
        }
        else
        {
            hra = 500;
            da = 0.98*bs;
            gross = bs + hra + da;
            if(gross%2==0)
            {
                cout<<gross<<endl;
            }
            else
            {
                cout<<fixed<<setprecision(2)<<gross<<endl;
            }
        }
    }
return 0;
}