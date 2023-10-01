// number od zeros in a number
#include<bits/stdc++.h>
using namespace std;

int checkNumber(int n)
{
    if(n>0)
        if(n%10==0)
            return 1+checkNumber(n/10);
        else
            return checkNumber(n/10);
    else
        return 0;
}


int main()
{
    int n;
    cin>>n;
    int z = checkNumber(n);
    cout<<z<<endl;
return 0;
}