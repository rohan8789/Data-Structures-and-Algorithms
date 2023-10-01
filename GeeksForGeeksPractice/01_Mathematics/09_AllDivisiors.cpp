//More Efficient
#include<bits/stdc++.h>
using namespace std;

void divisior(int n)
{
    int i;
    for(i=1; i*i<n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }

    for(; i>=1; i--)
    {
        if(n%i==0)
        {
            cout<<n/i<<" ";
        }
    }
}

int main()
{
    int n=100;
    divisior(n);
return 0;
}


//Efficient
// #include<bits/stdc++.h>
// using namespace std;
// //unsorted
// void divisior(int n)
// {
//     for(int i=1; i*i<=n; i++)
//     {
//         if(n%i==0)
//         {
//             cout<<i<<" ";
//             if(i!=n/i)
//             {
//                 cout<<n/i<<" ";
//             }
//         }
//     }
// }

// int main()
// {
//     int n=100;
//     divisior(n);
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void alldivisior(int n)
// {
//     for(int i=1; i<=n; i++)
//     {
//         if(n%i==0)
//         {
//             cout<<i<<" ";
//         }
//     }
// }


// int main()
// {
//     int n=100;
//     alldivisior(n);
// return 0;
// }