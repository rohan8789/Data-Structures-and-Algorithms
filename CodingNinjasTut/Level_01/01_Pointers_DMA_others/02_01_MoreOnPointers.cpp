#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=65;
    char c=i; //implicit Typecasting
    cout<<c<<endl;

    int *p = &i;
    char *pc = (char *)p;  //Explicit Typecasting

    cout<<p<<endl; //print address
    cout<<pc<<endl; //As we studied before, string actually goes to address and start printing the data inside it

    cout<<*p<<endl;
    cout<<*pc<<endl;
    cout<<*(pc+1)<<endl;
    cout<<*(pc+2)<<endl;
    cout<<*(pc+3)<<endl;

return 0;
}