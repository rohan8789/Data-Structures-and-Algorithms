#include<bits/stdc++.h>
using namespace std;

void forkcpp();

void forkcpp (int N)
{
     if (N%3==0 & N%5!=0)
    {
        cout<<"Fork";
    }
    
    else if (N%5==0 & N%3!=0)
    {
        cout<<"CPP";
    }
    
    else if (N%5==0 & N%3==0)
    {
        cout<<"Fork CPP";
    }
  
    cout << endl;  

}
int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int N;
        cin>>N;
        forkcpp(N);
    }
return 0;
}