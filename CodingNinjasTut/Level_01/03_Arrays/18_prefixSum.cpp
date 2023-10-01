#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int pSum[n];
    int sSum[n];
    pSum[0]=arr[0];
    for(int i=1; i<n; i++){
        pSum[i]=pSum[i-1]+arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<pSum[i]<<" ";
    }

    cout<<endl;
    sSum[n-1]=arr[n-1];
    for(int i=n-2; i>=0; --i){
        sSum[i]=sSum[i+1]+arr[i];
        //cout<<sSum[i]<<" ";
    }
    for(int i=0; i<n; i++){
        cout<<sSum[i]<<" ";
    }
return 0;
}