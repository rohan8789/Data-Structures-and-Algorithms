#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        float r = (float)q;
        int p;
        cin>>p;
        float s = (float)p;      
        if(q<=1000)
        {
            printf("%.6f\n", r*s);
        }
        else
        {
            printf("%.6f\n", r*(s-0.1*s));
        }
    }
return 0;
}