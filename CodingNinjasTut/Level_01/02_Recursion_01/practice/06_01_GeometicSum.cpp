// Geometric Sum
// Given k, find the geometric sum i.e.
// 1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
// using recursion. Return the answer.
// Sample Input :
// 3
// Sample Output :
// 1.875



#include<bits/stdc++.h>
using namespace std;

float GeometricSum(int k)
{
    if(k==0)
        return 1;
    return GeometricSum(k-1)+1/pow(2, k);

}

int main()
{
    int n;
    cin>>n;
    float z = GeometricSum(n);
    cout<<z<<endl;
return 0;
}