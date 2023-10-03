#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, flag =0;;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(i == arr[i])
            {
                flag=1;
            }
            else
            {
                break;
            }
        }
        if(flag ==1)
        {
            cout<<"Amb"<<endl;
        }
        else
        {
            cout<<"not"<<endl;
        }

    }
return 0;
}