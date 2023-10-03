#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int x;
    cin>>x;
    float y;
    cin>>y;
    if(x%5==0 && x<=y)
    {
        y = (y-x)-0.5;
        printf("%.2f", y);
    }
    else if(x%5!=0)
    {
        printf("%.2f", y);
    }
    else
    {
        printf("%.2f", y);
    }
return 0;
}