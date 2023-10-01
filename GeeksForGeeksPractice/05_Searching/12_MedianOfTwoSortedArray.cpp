#include<bits/stdc++.h>
using namespace std;

void Merge(int *a1,int *a2, int n, int m)
{
    double ans;
    int i=0, j=0, k=0;
    int c[n+m];
    while(i<n && j<m)
    {
        if(a1[i]<a2[j])
        {
            c[k++]=a1[i++];
        }
        else{
            c[k++]=a2[j++];
        }
    }
    while(i<n)
    {
        c[k++]=a1[i++];
    }
    while(j<m)
    {
        c[k++]=a2[j++];
    }
    int p=n+m;
    for(int z=0; z<n+m; z++)
    {
        if(p%2==0)
        {
            int o=(p-1)/2;
            int r=(p+1)/2;
            cout<<c[o]<<" "<<c[r]<<endl;
            ans=(c[o]+c[r])/2.0;
        }  
        if(p%2!=0)
        {
            int o=p/2;
            ans=c[o];
        }
    }
    cout<<ans<<endl;
}

int main()
{
    int a1[]={10,20,30,40,50,60};
    int a2[]={1,2,3,4,5};
    int n=sizeof(a1)/sizeof(int);
    int m=sizeof(a2)/sizeof(int);
    Merge(a1,a2,n,m);
return 0;
}