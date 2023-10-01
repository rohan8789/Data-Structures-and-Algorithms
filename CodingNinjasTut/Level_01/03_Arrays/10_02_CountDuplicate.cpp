#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    int n = sizeof(arr)/sizeof(int);

    int j=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==arr[i+1])
        {
            j=i;
            while(arr[j]==arr[i])j++;
            cout<<arr[i]<<"is appearing "<<j-i<<endl;
            i=j-1;
        }

    }
return 0;
}