//maximum product subarray
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int cmul = arr[0];
    int omul = arr[0];
    for(int i=1; i<n; i++)
    {
        if(cmul!=0)
        {
            cmul = cmul*arr[i];
        }
        else{
            cmul= arr[i];
        }
        if(cmul>omul)
        {
            omul = cmul;
        }
    }
    cout<<omul<<endl;
return 0;
}