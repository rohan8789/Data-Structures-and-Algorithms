#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string x;
        cin>>x;
        int flag =0, flag1=0;
        for(int i=0; i<n; i++)
        {
            if(x[i]=='I')
            {
                flag=1;
                break;
            }
            else if(x[i]=='Y')
            {
                flag1=1;
                break;
            }
        }
        if(flag==1 && flag1==0)
        {
            cout<<"INDIAN"<<endl;
        }
        else if(flag==0 && flag1==1)
        {
            cout<<"NOT INDIAN"<<endl;
        }
        else
        {
            cout<<"NOT SURE"<<endl;
        }
    }
return 0;
}