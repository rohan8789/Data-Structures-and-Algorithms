#include<bits/stdc++.h>
using namespace std;

vector<int> Naive(int *arr, int n, int k)
{
    vector<int> v;
    int c;
    for(int i=0; i<n-k+1; i++)
    {
        c=0;
        for(int j=0; j<k; j++)
        {
            bool flag=false;
            for(int k=0; k<j; k++)
            {
                if(arr[i+j]==arr[i+k])
                {
                    flag=true;
                    break;
                }
            }
            if(flag==false)
            {
                c++;
            }
        }
        v.push_back(c);
    }
    return v;
}

int main()
{
    int arr[]={10,20,20,10,30,40,10};
    int n=sizeof(arr)/sizeof(int);
    vector<int> ans=Naive(arr, n, 4);
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
return 0;
}