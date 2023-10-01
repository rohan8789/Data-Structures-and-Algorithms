#include<bits/stdc++.h>
using namespace std;

bool Sorted(int *arr, int n)
{
    if(n==0||n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    bool ans = Sorted(arr+1, n-1);
    return ans;

}

int main()
{
    int arr[] = {10, 20, 300, 40};
    int n = sizeof(arr)/sizeof(int);
    bool ans = Sorted(arr, n);
    if(ans)
    {
        cout<<"yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    // bool ans =true;
    // for(int i=0; i<n; i++)
    // {
    //     if(arr[i]>arr[i+1])
    //     {
    //         ans=false;
    //         break;
    //     }
    // }
    // if(ans==false)
    // {
    //     cout<<"NOt sorted"<<endl;
    // }
    // else{
    //     cout<<"Sorted"<<endl;
    // }
return 0;
}