#include<bits/stdc++.h>
using namespace std;

void primeFactor(int n)
{
    if(n<=1)
        return;
    while(n%2==0)
    {
        cout<<2<<" ";
        n=n/2;
    }
    while(n%3==0)
    {
        cout<<3<<" ";
        n=n/3;
    }
    for(int i=5; i*i<=n; i=i+6)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n=n/i;
        }
        while(n%(i+2)==0)
        {
            cout<<i<<" ";
            n=n/(i+2);
        }
    }
    if(n>3)
    {
        cout<<n;
    }
}

int main()
{
    int n=200;
    primeFactor(n);
return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n=200;
//     for(int i=2; i*i<=n; i++)
//     {
//         while(n%i==0)
//         {
//             cout<<i<<" ";
//             n=n/i;
//         }
//     }
//     if(n>1)
//     {
//         cout<<n;
//     }
// return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// bool isPrime(int n)
// {
//     if(n==1)
//         return false;
//     if(n==2||n==3)
//         return true;
//     if(n%2==0 || n%3==0)
//         return false;

//     for(int i=5; i*i<n; i=i+6)
//     {
//         if(n%i==0 || n%(i+2)==0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     int n=12;
//     for(int i=2; i<n; i++)
//     {
//         if(isPrime(i))
//         {
//             int x=i;
//             while(n%x==0){
//             cout<<i<<" ";
//             x=x*i;
//             }

//         }
//     }

// return 0;
// }