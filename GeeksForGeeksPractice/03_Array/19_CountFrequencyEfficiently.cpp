#include<bits/stdc++.h>
using namespace std;

void frequency(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        arr[i]=arr[i]-1;
    }
    for(int i=0; i<n; i++)
    {
        arr[arr[i]%n] = arr[arr[i]%n]+n;
    }
    for(int i=0; i<n; i++)
    {
        cout<<i+1<<" -> "<<arr[i]/n<<endl;
    }
}


int main()
{
    int arr[]={5, 2, 8, 5, 5, 9, 9, 1, 9, 13, 11, 13, 13};
    int n=sizeof(arr)/sizeof(int);
    frequency(arr, n);
return 0;
}