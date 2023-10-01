#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s1[]="gcd";
    char s2[]="gaa";
    int res=strcmp(s1,s2);
    if(res>0)
    {
        cout<<"greater";
    }
    else if(res<0)
    {
        cout<<"smaller";
    }
    else{
        cout<<"Equal";
    }
return 0;
}