#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i;
        int min = -1;
        int count =0;
        cin>>n;
        
        if(n%10==0)
        {
            cout<<count<<endl;
        }
        else if(n%5==0)
        {
            cout<<count+1<<endl;
        }
        else
        {
            cout<<count-1<<endl;
        }
    }
return 0;
}