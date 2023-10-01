#include<bits/stdc++.h>
using namespace std;

void Triplet(int *arr, int n, int x)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        int l=i+1;
        int h=n-1;
        while(l<h)
        {
            int sum=arr[i]+arr[l]+arr[h];
            if(sum==x)
            {
                cout<<arr[i]<<" "<<arr[l]<<" "<<arr[h]<<endl;
                l++;h--;
            }
            else if(sum>x)
            {
                h--;
            }
            else{
                l++;
            }
        }
    }
}

int main()
{
    int arr[]={2,3,4,8,9,20,40};
    int n=sizeof(arr)/sizeof(int);
    Triplet(arr, n, 32);
return 0;
}