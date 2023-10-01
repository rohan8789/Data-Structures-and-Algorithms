#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,w;
	    cin>>n>>w;
	    int *arr= new int[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    int sum=0,c=0;
	    sort(arr, arr+n);
        for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";
        cout<<endl<<endl;
	    cout<<arr[n-1]<<endl;
	   // if(arr[n]>=w)return n;
	    for(int i=n; i>=0; i--)
	    {
	        c++;
	        sum+=arr[i];
	        if(sum>=w)break;
	    }
	    cout<<n-c<<endl;
	}
	return 0;
}
