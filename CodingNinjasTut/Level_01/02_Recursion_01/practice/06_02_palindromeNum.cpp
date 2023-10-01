#include<bits/stdc++.h>
using namespace std;

int isPalindrome(int n, int temp =0)
{
    
    if(n==0)
        return temp;
    temp = temp*10+n%10;
    return isPalindrome(n/10, temp);
}

int main()
{
    int n;
    cin>>n;
    int ans=isPalindrome(n);
    if(ans==n)
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
return 0;
}