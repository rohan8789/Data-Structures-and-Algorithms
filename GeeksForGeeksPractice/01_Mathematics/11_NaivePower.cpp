#include<bits/stdc++.h>
using namespace std;

int main()
{
    int res=1;
    int x=3, n=4;
    for(int i=0; i<n; i++)
    {
        res=res*x;
    }
    cout<<res;
return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int power(int x, int n)
// {
//     if(x==0)
//         return 0;
//     if(n==1)
//         return x;
//     return x*power(x, n-1);
    
// }

// int main()
// {
//     int x=3, n=4;
//     int ans= power(x, n);
//     cout<<ans;
// return 0;
// }