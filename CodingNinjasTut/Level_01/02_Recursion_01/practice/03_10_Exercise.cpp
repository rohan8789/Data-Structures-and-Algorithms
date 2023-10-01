// All Indices of Number
// Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in an array (in increasing order).
// Do this recursively. Indexing in the array starts from 0.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Line 3 : Integer x
// Output Format :
// indexes where x is present in the array (separated by space)
// Constraints :
// 1 <= N <= 10^3
// Sample Input :
// 5
// 9 8 10 8 8
// 8
// Sample Output :
// 1 3 4

#include<bits/stdc++.h>
using namespace std;

void countIndex(int *arr, int n, int k)
{
    if(n==0)
        return;
    countIndex(arr, n-1, k);
    if(arr[n-1]==k)
    {
        cout<<n-1<<" ";
    }

}

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int *op[n];
    countIndex(arr, n, k);
    //cout<<z<<endl;
 
return 0;
}
