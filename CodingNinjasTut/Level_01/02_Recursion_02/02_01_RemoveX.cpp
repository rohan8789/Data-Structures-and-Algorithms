#include<bits/stdc++.h>
using namespace std;

void removeX(char str[])
{
    if(str[0]=='\0')
        return;
    if(str[0]!= 'x')
        removeX(str+1);
    else{
        int i=1;
        for(; str[i]!='\0'; i++)
        {
            str[i-1]=str[i];
        }
        str[i-1]='\0';
        removeX(str);
    }
}

int main()
{
    int n;
    cin>>n;
    char *str = new char[n];
    cin>>str;
    removeX(str);
    cout<<str<<endl;

return 0;
}