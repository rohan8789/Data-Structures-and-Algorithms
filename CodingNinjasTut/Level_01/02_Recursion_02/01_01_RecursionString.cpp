//string length recursive
#include<bits/stdc++.h>
using namespace std;

int length(char str[])
{
    if(str[0]=='\0')
        return 0;
    // int smallStringlen = 1 + length(str+1);
    // return smallStringlen;
    return 1 + length(str+1);
}

int main()
{
    char str[30];
    cin>>str;
    int len = length(str);
    cout<<len<<endl;
return 0;
}