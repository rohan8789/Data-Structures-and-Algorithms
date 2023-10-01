#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 99;
    int b = 108;
    int i = 1, j = 2;
    while(j<=a && j<=b)
    {
        if (a % j == 0  && b % j == 0)
        {
            a = a / j;
            b = b / j;      
        }
        else{
            j++;
        }
        
        i++;
    }
    cout << a << "/" << b;
    return 0;
}