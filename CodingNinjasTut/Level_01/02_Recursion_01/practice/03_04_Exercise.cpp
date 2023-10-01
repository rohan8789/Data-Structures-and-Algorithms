// Sum of Array
// Given an array of length N, you need to find and return the sum of all elements of the array.
// Do this recursively.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Output Format :
// Sum
// Constraints :
// 1 <= N <= 10^3
// Sample Input :
// 3
// 9 8 9
// Sample Output :
// 26


#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int n)
{
    if(n ==0)
        return 0;
    int p=arr[0];
    p = p+sum(arr+1, n-1);
    return p;
    
}

int main()
{
    int n;
    cin>>n;
    int *arr =new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int x = sum(arr, n);
    cout<<x<<endl;
return 0;
}