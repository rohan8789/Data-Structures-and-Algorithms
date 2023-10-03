#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, o, k;
        cin>>a>>o>>k;
        int x;
        x=abs(a-o);
        if(k>=x)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<x-k<<endl;
        }
    }
return 0;
}