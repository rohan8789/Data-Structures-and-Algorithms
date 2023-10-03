#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x, y, z, a, b, c;
    a = n/100;
    b = (n%100)/50;
    c = (n%100)%50/10;
    y = n%100%50%10/2;
    z = n%100%50%10%2/1;
    x = (((((n%100)%50)%10)%5)%2)/1;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;

    
return 0;
}