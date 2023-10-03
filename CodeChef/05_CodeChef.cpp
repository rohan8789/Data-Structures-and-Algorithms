#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int sum;
    int n, p;
    while(t--)
    {
        cin>>n;
        sum = 0;
        while(n!=0)
        {
            int rem;
            rem = n%10;
            sum = sum + rem;
            n = n/10;
        }
        cout<<sum<<endl;
    }
   
    
return 0;
}