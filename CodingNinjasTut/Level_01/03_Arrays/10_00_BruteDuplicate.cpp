#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = { 8, 6, 3, 15, 12, 3, 6, 15, 3};
    int n = sizeof(arr)/sizeof(int);
    int count;
    int save=0;
    for(int i=0; i<n-1; i++)
    {
        count=1;
        if(arr[i]!=-1)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    arr[j]=-1;
                }
            }
        }
        if(count>1){
            cout<<arr[i]<<" "<<count<<endl;
        }
    }
return 0;
}