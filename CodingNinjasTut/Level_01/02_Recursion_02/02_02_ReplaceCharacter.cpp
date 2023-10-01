// Replace Character Recursively
// Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
// Do this recursively.
// Input Format :
// Line 1 : Input String S
// Line 2 : Character c1 and c2 (separated by space)
// Output Format :
// Updated string
// Constraints :
// 1 <= Length of String S <= 10^6
// Sample Input :
// abacd
// a x
// Sample Output :
// xbxcd

#include<bits/stdc++.h>
using namespace std;

void replaceStr(char str[], int n, int o)
{
    if(str[0]=='\0')
        return;
    if(str[0]!=o)
        replaceStr(str+1, n, o);
    else{
        int i=0; 
        for(; str[i]!='\0'; i++)
        {
            if(str[i]==o)
                str[i]=n;
        }
        replaceStr(str, n ,o);
    }
}

int main()
{
    int x;
    cin>>x;
    char *str = new char[x];
    cin>>str;
    char n, o;
    cin>>n>>o;
    replaceStr(str, n, o);
    cout<<str<<endl;
return 0;
}
