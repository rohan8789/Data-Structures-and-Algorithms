// //Recursive multiplication
// #include<bits/stdc++.h>
// using namespace std;

// int mul(int m, int n)
// {
//     if(m==0|| n==0)
//         return 0;
//     int ans = mul(m, n-1);
//     return m+ans;
// }

// int main()
// {
//     int m, n;
//     cin>>m>>n;
//     int res = mul(m, n);
//     cout<<res<<endl;
// return 0;
// }

// //count zeros
// #include<bits/stdc++.h>
// using namespace std;

// int countzeros(int n)
// {
//     if(n!=0)
//     {
//         if(n%10==0)
//             return 1+countzeros(n/10);
//         else
//             return countzeros(n/10);
//     }
//     else{
//         return 0;
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int res = countzeros(n);
//     cout<<res<<endl;
// return 0;
// }

// // Geometric Sum
// // Given k, find the geometric sum i.e.
// // 1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
// // using recursion. Return the answer.
// // Sample Input :
// // 3
// // Sample Output :
// // 1.875

// #include<bits/stdc++.h>
// using namespace std;

// float Gsum(int n)
// {
//     if(n==0)
//         return 1;
//     return Gsum(n-1)+ 1/pow(2, n);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     float res = Gsum(n);
//     cout<<res<<endl;
// return 0;
// }


// //Palindrome Number
// #include<bits/stdc++.h>
// using namespace std;

// int Palindrome(int n)
// {
//     static int temp=0;
//     if(n==0)
//         return 0;
//     temp = temp*10 + n%10;
//     Palindrome(n/10);
//     return temp;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int res = Palindrome(n);
//     cout<<res<<endl;
// return 0;
// }


// //removeX
// #include<bits/stdc++.h>
// using namespace std;

// void dropX(char *str)
// {
//     int len = strlen(str);
//     if(len==0)
//         return;
//     if(str[0]!='x')
//     {
//         dropX(str+1);
//     }
//     else{
//         int i=1; 
//         for(; str[i]!='\0'; i++)
//         {
//             str[i-1]=str[i];
//         }
//         str[i-1]='\0';
//         dropX(str);
//     }

// }

// int main()
// {
//     char *str = new char[20];
//     cin>>str;
//     dropX(str);
//     cout<<str<<endl;
// return 0;
// }


// //sum of digits
// //12345 is 15
// #include<bits/stdc++.h>
// using namespace std;

// int sumofdigits(int n)
// {
//     if(n==0)
//         return 0;
//     static int sum=0;
//     sum = sum +n%10;
//     sumofdigits(n/10);
//     return sum;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int res = sumofdigits(n);
//     cout<<res<<endl;
// return 0;
// }

//replace pi
/*
Input:
 
arr = [8, 7, 2, 5, 3, 1]
sum = 10
 

Output:
 
Pair found (8, 2)
or
Pair found (7, 3)
*/

//brute force
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }

   //sort(v1.begin(), v1.end());
   int sum;
   cin>>sum;
   int count = 0;
   for(int i=0; i<n-1; i++)
   {
       for(int j=i+1; j<n; j++)
       {
           if(sum == v1[i] + v1[j]){
               count++;
               cout<<"Pair found ("<<v1[i]<<","<<v1[j]<<endl;
           }
       }
   }
   if(count==0){
       cout<<"Pair nof found";
   }

return 0;
}