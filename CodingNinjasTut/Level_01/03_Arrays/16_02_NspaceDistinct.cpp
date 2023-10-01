#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = { 8, 6, 3, 15, 12, 3, 6, 15, 3};
    int n = sizeof(arr)/sizeof(int);

    int b[n];
    for(int i=0; i<n; i++){
        b[i]=arr[i];
    }

    for(int i=0; i<n; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<n; i++){
        if(arr[i]==b[i]){
            continue;
        }
        cout<<b[i]<<" ";
    }
return 0;
}