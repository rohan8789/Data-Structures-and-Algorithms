#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin>>n;
    // int arr[n]; is a Bad Practice
    //Instead we can write

    int *ptr = new int;
    *ptr = 10;
    cout<<*ptr<<endl;

    //similarily
    char *x = new char;
    double *y = new double;
    //and so on
return 0;
}