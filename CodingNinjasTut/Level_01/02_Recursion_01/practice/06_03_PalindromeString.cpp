#include<bits/stdc++.h>
using namespace std;

bool check(char str[], int s, int end)
{
    if(s==end)
        return true;
    
    if(str[s]!= str[end])
        return false;
    
    return check(str, s+1, end-1);
    return true;
}

bool isPalindrome(char str[])
{
    int len = strlen(str);
    int s = 0;
    int end = len-1;
    if(len==0)
        return false;
    return check(str, s, end);
}

int main()
{
    char *str = new char[30];
    cin>>str;
    bool ans = isPalindrome(str);
    cout<<ans<<endl;
return 0;
}