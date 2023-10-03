#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    char x;
	    cin>>x;
	    if(x == 'B' || x=='b')
	    {
	        cout<<"BattleShip"<<endl;
	    }
	    else if(x=='C'||x=='c')
	    {
	        cout<<"Cruiser"<<endl;
	    }
	    else if(x=='d'|| x=='D')
	    {
	        cout<<"Destroyer"<<endl;
	    }
	    else if(x=='F'||x=='f')
	    {
	        cout<<"Frigate"<<endl;
	    }
	}
	return 0;
}
