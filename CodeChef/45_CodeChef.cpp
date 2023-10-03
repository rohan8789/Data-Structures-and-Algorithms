#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s[2];
        cin>>s;
        int i=0, p=0, c=0, m=0;
        while(s[i]!='\0')
        {
            if(s[i]=='P')
            p=p+1;
            else if(s[i]=='C')
            c=c+1;
            else if(s[i]=='M')
            m=m+1;
            i++;
        }
        if(p==1 && c==1 && m==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
return 0;
}