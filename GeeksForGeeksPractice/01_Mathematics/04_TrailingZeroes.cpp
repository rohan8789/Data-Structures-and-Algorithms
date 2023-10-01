#include<bits/stdc++.h>
using namespace std;

int f(int n)
{
    if(n<5){
        return 0;
    }
    return n/5+f(n/5);
}

int main()
{
    int z = f(1000);
    cout<<z<<endl;
return 0;
}