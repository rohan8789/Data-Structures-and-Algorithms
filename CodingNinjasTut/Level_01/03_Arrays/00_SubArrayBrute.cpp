#include<bits/stdc++.h>
using namespace std;

void countSumSubsets(int arr[], int n){
        int count=0;
        int sum=0;
        // Your code here
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<=n; j++)
            {
                for(int k=i; k<j; k++)
                {
                    cout<<arr[k]<<" ";
                }
                cout<<endl;
            }
        }
        
    }

int main()
{
    int n;
    int arr[] = {1,2,3};
    n=sizeof(arr)/sizeof(int);
    countSumSubsets(arr, n);

return 0;
}

