#include<bits/stdc++.h>
using namespace std;

void freq(int *arr, int n)
{
    int count;
    int j, lI=-1;
    for(int i=0; i<n; i++)
    {
        count=0;
        for(j=0; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(lI!=arr[i]){
            cout<<arr[i]<<" found "<<count<<" Times"<<endl;
            lI=arr[i];
        }
    }
}

int main()
{
    int arr[] = {10, 10, 10, 25, 40, 40, 50};
    int n = sizeof(arr)/sizeof(int);
    freq(arr, n);
return 0;
}