// //Factorial
// #include<bits/stdc++.h>
// using namespace std;

// int Factorial(int n)
// {
//     if(n==0||n==1)
//     {
//         return 1;
//     }
//     int ans = Factorial(n-1);
//     return n*ans;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int z = Factorial(n);
//     cout<<z<<endl;
// return 0;
// }

// //Power x^n == x*x*x*x...*n;
// #include<bits/stdc++.h>
// using namespace std;

// int Power(int x, int n)
// {
//     if(n==0)
//         return 1;
//     else if(n%2==0)
//     {
//         int y = Power(x, n/2);
//         return y*y;
//     }
//     else{
//         return x*Power(x, n-1);
//     }
// }

// int main()
// {
//     int x, n;
//     cin>>x>>n;
//     int ans = Power(x, n);
//     cout<<ans<<endl;
// return 0;
// }

// //Print number in descending n= 6, 1,2,3,4,5,6
// #include<bits/stdc++.h>
// using namespace std;

// void Print(int n)
// {
//     if(n==0)
//         return;
//     Print(n-1);
//     cout<<n<<endl;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     Print(n);

// return 0;
// }

// // Number of Digits
// // Given the code to find out and return the number of digits present in a number recursively. But it contains few bugs, that you need to rectify such that all the test cases should pass.
// // Input Format :
// // Integer n
// // Output Format :
// // Count of digits
// // Constraints :
// // 1 <= n <= 10^6
// // Sample Input :
// //  156
// // Sample Output :
// // 3

// #include<bits/stdc++.h>
// using namespace std;

// int CountNum(int n)
// {
//     static int count =0;
//     if(n==0)
//         return 0;

//     count++;
//     CountNum(n/10);
//     return count;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int ans = CountNum(n);
//     cout<<ans<<endl;
// return 0;
// }

// //Fibonacci Number
// #include<bits/stdc++.h>
// using namespace std;

// int Fib(int n)
// {
//     if(n==0||n==1)
//         return 1;
//     return Fib(n-1)+Fib(n-2);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int ans = Fib(n);
//     cout<<ans<<endl;
// return 0;
// }

// //CHeck if array is Sorted
// #include<bits/stdc++.h>
// using namespace std;

// bool isSorted(int *arr, int n)
// {
//     if(n==1)
//         return true;
//     if(arr[0]>arr[1])
//         return false;
//     return isSorted(arr+1, n-1);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int *arr = new int[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     bool ans = isSorted(arr, n);
//     cout<<ans<<endl;
// return 0;
// }

// // Sum of Array
// // Given an array of length N, you need to find and return the sum of all elements of the array.
// // Do this recursively.
// // Input Format :
// // Line 1 : An Integer N i.e. size of array
// // Line 2 : N integers which are elements of the array, separated by spaces
// // Output Format :
// // Sum
// // Constraints :
// // 1 <= N <= 10^3
// // Sample Input :
// // 3
// // 9 8 9
// // Sample Output :
// // 26

// #include<bits/stdc++.h>
// using namespace std;

// int SumOfArray(int *arr, int n)
// {
//     if(n==0)
//         return 0;
//     return arr[0]+SumOfArray(arr+1, n-1);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int * arr = new int[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     int sum = SumOfArray(arr, n);
//     cout<<sum<<endl;
// return 0;
// }

// Check Number
// Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
// Do this recursively.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Line 3 : Integer x
// Output Format :
// true or false
// Constraints :
// 1 <= N <= 10^3
// Sample Input :
// 3
// 9 8 10
// 8
// Sample Output :
// true

// #include<bits/stdc++.h>
// using namespace std;

// bool find(int *arr, int n, int k)
// {
//     if(n<1)
//         return false;
//     if(arr[0]==k)
//         return true;
//     return find(arr+1, n-1, k);

// }

// int main()
// {
//     int n;
//     cin>>n;
//     int *arr = new int[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     bool ans = find(arr, n, k);
//     cout<<ans<<endl;
// return 0;
// }


// First Index of Number
// Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
// First index means, the index of first occurrence of x in the input array.
// Do this recursively. Indexing in the array starts from 0.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Line 3 : Integer x
// Output Format :
// first index or -1
// Constraints :
// 1 <= N <= 10^3
// Sample Input :
// 4
// 9 8 10 8
// 8
// Sample Output :
// 1

// #include<bits/stdc++.h>
// using namespace std;

// int firstOccurance(int *arr, int n, int k)
// {
//     if(n==0)
//         return -1;
//     if(arr[0]==k)
//         return 0;
//     return 1+firstOccurance(arr+1, n-1, k);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int *arr = new int[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     int ans = firstOccurance(arr, n, k);
//     cout<<ans<<endl;
// return 0;
// }


// Last Index of Number
// Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. Return -1 if it is not present in the array.
// Last index means - if x is present multiple times in the array, return the index at which x comes last in the array.
// You should start traversing your array from 0, not from (N - 1).
// Do this recursively. Indexing in the array starts from 0.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Line 3 : Integer x
// Output Format :
// last index or -1
// Constraints :
// 1 <= N <= 10^3
// Sample Input :
// 4
// 9 8 10 8
// 8
// Sample Output :
// 3

// #include<bits/stdc++.h>
// using namespace std;

// int lastIndex(int *arr, int n, int k)
// {
//     if(n<1)
//         return -1;
//     if(arr[n-1]==k)
//         return n-1;

//     return lastIndex(arr, n-1, k);

// }

// int main()
// {
//     int n;
//     cin>>n;
//     int *arr = new int[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     int ans = lastIndex(arr, n, k);
//     cout<<ans<<endl;
// return 0;
// }

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

void AllIndices(int *arr, int n, int k)
{
    if(n<1)
        return;
    return AllIndices(arr, n-1, k);
    
    if(arr[n-1]==k)
        cout<<n-1<<" ";
    
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
    int k;
    cin>>k;
  AllIndices(arr, n, k);
    //cout<<xyz<<endl;
return 0;
}