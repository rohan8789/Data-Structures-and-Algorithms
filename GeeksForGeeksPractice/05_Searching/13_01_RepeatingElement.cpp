#include<bits/stdc++.h>
using namespace std;

int Naive(int *arr, int n){
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(arr[i]==arr[j])
                return arr[i];
    
    return -1;
}

int Sort(int *arr, int n)
{
    sort(arr, arr+n);
    for(int i=0; i<n-1; i++)
        if(arr[i]==arr[i+1])
            return arr[i];
    return -1;
}

int Nspace(int *arr, int n)
{
    bool array[n-1]={false};
    for(int i=0; i<n-1; i++)
    {
        if(array[arr[i]]==true)
            return arr[i];
        array[arr[i]]=true;
    }
    return -1;
}

int main()
{
    int arr[]={1,2,3,0,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int ans=Naive(arr, n);
    int ans1=Sort(arr, n);
    int ans2=Nspace(arr, n);
    cout<<ans<<endl;
    cout<<ans1<<endl;
    cout<<ans2<<endl;
return 0;
}