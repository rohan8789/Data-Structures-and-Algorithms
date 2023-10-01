#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,4,20,3,10,5};
    int n=sizeof(arr)/sizeof(int);
    int i=0,res=0;
    int sum=33,s=arr[0];
    while(i<n)
    {
        // s+=arr[i];
        if(s==sum){
            cout<<s<<endl;
        }
        else if(s>sum)
        {
            s-=arr[res];
            res++;
        }
        else if(s<sum)
        {
            s+=arr[i];
        }
        i++;
    }
return 0;
}