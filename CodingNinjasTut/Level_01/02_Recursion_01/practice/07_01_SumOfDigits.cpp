// Sum of digits (recursive)
// Write a recursive function that returns the sum of the digits of a given integer.
// Sample Input :
// 12345
// Sample Output :
// 15

#include<bits/stdc++.h>
using namespace std;

int palindrome(int n)
{
    if(n==0)
        return 0;
    int rem = n%10;
    return rem +palindrome(n/10);
}

int main()
{
    int n;
    cin>>n;
    int ans = palindrome(n);
    cout<<ans<<endl;
return 0;

}
