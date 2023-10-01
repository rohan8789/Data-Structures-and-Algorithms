#include<bits/stdc++.h>
using namespace std;

int count2(int *arr, int n)
{
    int c=0;
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i]!=0)
            c++;
        else
            break;
    }
    return c;
}

#include<bits/stdc++.h>
using namespace std;

int count(int *arr, int n)
{
    int l=0;
    int h=n-1;
    while(l<=h)
    {
       int mid=(l+h)/2;
       if(arr[mid]==0)
       {
         l=mid+1;
       }
       else{
          if(arr[mid-1]!=arr[mid] || mid==0)
          {
            return n-mid;
          }
          else{
            h=mid-1;
          }
       }
    }
    return 0;
}

int main()
{
    int arr[]={0,0,0,1,1,1,1};
    int n=sizeof(arr)/sizeof(int);
    int ans=count(arr, n);
    cout<<ans<<endl;
return 0;
}