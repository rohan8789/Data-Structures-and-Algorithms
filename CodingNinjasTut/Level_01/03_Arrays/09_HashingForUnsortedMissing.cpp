//Hashing is best for insertion deletion and searching


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int low = 6;
    int high=15;
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int arr1[high-low+1] = {0};
    for(int i=0; i<high-low+1; i++)
    {
        arr1[arr[i]]++;
    }
    for(int i=low; i<=high; i++)
    {
        if(arr1[i]==0)
        {
            cout<<i<<endl;
        }
    }
return 0;
}