#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, p=0;
    cin>>t;
    cin>>n;
    cout<<n<<endl;
    while(t--)
    {
        cin>>p;
        p = abs(p-n);
        cout<<p<<endl;
        
    }
return 0;
}