#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, max =0;
    cin>>t;
    while(t--)
    {
        string x;
        string y;
        int i=0;
        int min=0;
        cin>>x;
        cin>>y;
        
        while(x[i]!='\0'&&y[i]!='\0')
        {
            
            if(x[i]!='?' && y[i]!='?' && x[i]!=y[i])
            {
                min++;
                max++;
            }
            if(x[i]=='?' || y[i]=='?')
            {
                max++;
            }
            i++;
        }
        cout<<min<<" "<<max<<endl;
    }
return 0;
}