#include<bits/stdc++.h>
using namespace std;

int main()
{
    //int *p = new int[2];
    int n;
    cin>>n;
    int *q = new int[n];
    //this is the right way
    for(int i=0; i<n; i++)
    {
        cin>>*(q+i);
    }
    int max = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(max<*(q+i))
            max=*(q+i);
    }
    cout<<max<<endl;
return 0;
}