#include <iostream>
using namespace std;

int func(int a, int b, int c)
{
    if(a>b && a<c)
    {
        return a;
    }
    else if(b>c && b<a)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int a, b, c;
	    cin>>a>>b>>c;
	    int w;
	    
	    w = func(a, b, c);
	    cout<<w<<endl;
	}
	return 0;
}
