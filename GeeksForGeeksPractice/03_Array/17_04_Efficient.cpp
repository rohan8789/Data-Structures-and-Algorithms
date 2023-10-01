//Question is trickier as k is not given
#include<bits/stdc++.h>
using namespace std;

bool kConsecutive(int *arr, int n, int sum)
{
    int sum1;
    int i=0;
    int j=0;
    while(sum1<sum)
    {
        sum1=sum1+arr[i];
        i++;
    }
    int win=sum1;
    while(win>sum)
    {
        win=win-arr[j];
        if(win==sum)
        {
            return true;
        }
        j++;
    }
    return false;
}

int main()
{
    //int arr[] = {5,8,6,13,3,-1};
    int arr[] = {1,4,20,3,10,5};
    int n=sizeof(arr)/sizeof(int);
    bool ans=kConsecutive(arr,n, 33);
    if(ans==true)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
return 0;
}