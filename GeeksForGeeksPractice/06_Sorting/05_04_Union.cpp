#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=45;
    while(n>6)
    {
        int r=n%10;
        n=n/10;
        cout<<r<<" "<<n<<endl;
    }
return 0;
}