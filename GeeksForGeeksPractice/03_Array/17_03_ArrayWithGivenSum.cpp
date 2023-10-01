//Question is trickier as k is not given
#include<bits/stdc++.h>
using namespace std;

bool kConsecutive(int *arr, int n, int sum)
{
    bool ans=false;
    int sum1;
    for(int i=0; i<n; i++)
    {
        sum1=0;
        for(int j=i; j<n; j++)
        {
            sum1=sum1+arr[j];
            cout<<sum1<<endl;
            if(sum1==sum){
                ans=true;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return ans;
}

int main()
{
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