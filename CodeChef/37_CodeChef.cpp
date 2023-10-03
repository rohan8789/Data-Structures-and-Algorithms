//prove rect
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x = pow(d, 2);
        int y = pow(a, 2);
        int z = pow(b, 2);
        int m = pow(c, 2);
        int p = x+y;
        int q = z+m;
        if(a==c && b==d && p==q)
        {
            cout<<"Rectangle"<<endl;
        }   
        else
        {
            cout<<"no"<<endl;
        }
    }
return 0;
}