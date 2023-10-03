//finding lcm hcf
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, lcm, hcf;
        cin>>a>>b;
        for(lcm = a>b?a:b; lcm<a*b; lcm=lcm+(a>b?a:b))
        {
            if(lcm%a==0 && lcm%b==0)
            {
                break;
            }
        }
        
        for(hcf=a<b?a:b; hcf>0; hcf--)
        {
            if(a%hcf==0 && b%hcf==0)
            {
                break;
            }
        }
        cout<<lcm<<" "<<hcf<<endl;
    }
return 0;
}