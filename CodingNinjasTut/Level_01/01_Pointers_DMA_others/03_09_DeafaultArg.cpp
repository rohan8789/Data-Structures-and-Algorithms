#include<bits/stdc++.h>
using namespace std;

// void sum(int *arr, int n, int stByUser=0)
// {
//     int ans=0;
//     for(int i=stByUser; i<n; i++)
//     {
//         ans+=arr[i];
//     }
//     cout<<ans<<endl;
// }

int sum2(int a, int b, int c=4, int d=0)
{
    return a+b+c+d;
}

int main()
{
    // int n;
    // cin>>n;
    // int *q = new int[n];
    // for(int i=0; i<n; i++)
    // {
    //     cin>>q[i];
    // }
    // sum(q, n);
    int x = sum2(2, 4, 5); //overrides default arg.
                          //here we are giving user either give 1,2,3 or 4 function
                          //Effectively we made 4 function here
    cout<<x<<endl;
return 0;
}