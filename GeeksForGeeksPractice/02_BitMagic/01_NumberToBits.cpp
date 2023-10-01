#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int n=17;
    int c=0;
    while(n>=1)
    {
        if(n%2!=0)
        {
            c++;
            cout<<n%2;
        }
        else{
            c++;
            cout<<n%2;
        }
        n=n/2;
    }
    cout<<c<<endl;
return 0;
}