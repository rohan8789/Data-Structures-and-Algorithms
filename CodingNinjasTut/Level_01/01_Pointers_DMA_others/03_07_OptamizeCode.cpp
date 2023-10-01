#include<bits/stdc++.h>
using namespace std;

inline int max(int a, int b){
    (a>b)?a:b;
}

int main()
{
    int a, b;
    cin>>a>>b;
    int c=max(a,b);
    cout<<c<<endl;

    int x=12, y= 56;
    int d = max(x,y);
    cout<<d<<endl;
return 0;
}