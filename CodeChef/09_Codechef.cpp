#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n; 
    int first, last;
    cin>>n;
    if(n!=0)
    {
       last = n%10;
    }
    while(n>=9)
    {
        n = n/10;
    }
    
    int sum = n + last;
    cout<<sum;

return 0;
}