#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=12; 
    int b=5;
    int lcm;
    lcm = a*b/__gcd(a,b);
    cout<<lcm<<endl;
return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a=3;
//     int b=7;
//     int i = max(a,b);
//     while(true)
//     {
//         if(i%a==0 && i%b==0)
//         {
//             cout<<i<<endl;
//             break;
//         }
//         i++;
//     }
// return 0;
// }