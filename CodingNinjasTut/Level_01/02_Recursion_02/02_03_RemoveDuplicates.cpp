// Remove Duplicates Recursively
// Given a string S, remove consecutive duplicates from it recursively.
// Input Format :
// String S
// Output Format :
// Output string
// Constraints :
// 1 <= Length of String S <= 10^3
// Sample Input :
// aabccba
// Sample Output :
// abcba

#include<bits/stdc++.h>
using namespace std;

void Duplicates(char str[])
{
    if(str[0]=='\0')
        return;
    if(str[0]==str[1])
    {
        int i=0;
        for(; str[i]!='\0'; i++)
        {
            str[i]=str[i+1];
        }
        Duplicates(str);
    }
    else{
        Duplicates(str+1);
    }
}

int main()
{
    int n;
    cin>>n;
    char *str = new char[n];
    cin>>str;
    Duplicates(str);
    cout<<str<<endl;
return 0;
}