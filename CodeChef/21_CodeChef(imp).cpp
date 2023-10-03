#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p, i = 11, count = 0;
        cin>>p;
        while(p>0)
        {
            while(p>=pow(2, i))
            {
                p = p - pow(2, i);
                count++;
            }
            i--;
        }
        cout<<count<<endl;
    }
return 0;
}