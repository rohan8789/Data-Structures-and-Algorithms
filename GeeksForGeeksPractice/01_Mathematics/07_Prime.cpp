//All prime between 1 to 20
#include<bits/stdc++.h>
using namespace std;

void prime(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(i==1 || i==2){
            continue;
        }
        int flag=1;
        for(int j=2; j<=i/2; j++)
        {
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<i<<" ";
        }
    }
    
}

int main()
{
    int n=70;
    prime(n);
return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// bool isprime(int n)
// {
//     if(n==1)
//         return false;
//     if(n==2 || n==3)
//         return true;
//     if(n%2==0 || n%3==0)
//         return false;
//     for(int i=5; i*i<n; i=i+6)
//     {
//         if(n%i==0 || n%(i+2)==0)
//             return false;
//     }
//     return true;
// }

// int main()
// {
//     int n=15;
//     if(isprime(n))
//     {
//         cout<<"Yes"<<endl;
//     }
//     else{
//         cout<<"no"<<endl;
//     }
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// bool isPrime(int n)
// {
//     int count=0;
//     for(int i=2; i*i<=n; i++)
//     {
//         if(n%i==0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     int n=13;
//     if(isPrime(n))
//     {
//         cout<<"Yes"<<endl;
//     }
//     else{
//         cout<<"no"<<endl;
//     }
// return 0;
// }