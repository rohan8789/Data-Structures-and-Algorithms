#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1=10;
    int n2=15;
    int res = min(n1, n2);
    for(int i=res; i>0; --i)
    {
        if(n1%i==0 && n2%i==0)
        {
            cout<<i<<endl;
            break;
        }
    }
return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n1=10;
//     int n2=15;
//     while(true)
//     {
//         int rem = n1%n2;
//         if(rem==0)
//         {
//             break;
//         }
//         n1=n2;
//         n2=rem;
//     }
//     cout<<n2<<endl;
// return 0;
// }