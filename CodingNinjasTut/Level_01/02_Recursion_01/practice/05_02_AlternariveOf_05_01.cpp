// we can use static int to count a number of times a function is called, but an auto variable can't be used for this purpose



#include<bits/stdc++.h>
using namespace std;

int countZeros(int n)
{
    static int count=0;
    if(n>0)
    {
        if(n%10==0)
            count++;
        countZeros(n/10);
    }
    return count;
}


int main()
{
    int n;
    cin>>n;
    int z =countZeros(n);
    cout<<z<<endl;
return 0;
}