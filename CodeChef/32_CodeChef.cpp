#include <bits/stdc++.h>
#include<string>
using namespace std;
#define max 256

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    char x[30];
	    cin.getline(x, 30);
	    int len = strlen(x),i;
	    int *countleft = new int[max];
	    int *countright = new int[max];
	   // int countleft;
	   // int countright;
	   // int max = 256;
	    if(len%2==0)
	    {
	        for(i=0; i<len/2; i++)
	        {
	            countleft[i]++;
	        }
	        for(i = len/2; i<len; i++)
	        {
	            countright[i]++;
	        }
	        for(i=0; i<256; i++)
	        {
	            if(countleft == countright)
	            continue;
	            else
	            break;
	        }
	        if(i==256)
	        {
	            cout<<"yes"<<endl;
	        }
	        else
	        {
	            cout<<"no"<<endl;
	        }
	    }
	    else
	    {
	        for(i=0; i<len/2; i++)
	        {
	            countleft[i]++;
	        }
	        for(i=(len+1)/2; i<len; i++)
	        {
	            countright[i]++;
	        }
	        for(i=0; i<256; i++)
	        {
	            if(countleft==countright)
	            continue;
	            else
	            break;
	        }
	        if(i==256)
	        {
	            cout<<"yes"<<endl;
	        }
	        else
	        {
	            cout<<"no"<<endl;
	        }
	    }
	}
	return 0;
}