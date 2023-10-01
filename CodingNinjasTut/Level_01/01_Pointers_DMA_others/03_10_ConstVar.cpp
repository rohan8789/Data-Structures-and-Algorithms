#include<bits/stdc++.h>
using namespace std;

int main()
{
    //constant variable
    // int i = 10;
    // i=12;
    // cout<<i<<endl;

    const int i=10;
    // i=12;  //throws error
    cout<<i<<endl;

    //constant reference
    int j=30;
    const int &k = j;
    j++;
    cout<<k<<endl;

    // but
    // k++;
    cout<<k<<endl; //is forbidden
return 0;
}