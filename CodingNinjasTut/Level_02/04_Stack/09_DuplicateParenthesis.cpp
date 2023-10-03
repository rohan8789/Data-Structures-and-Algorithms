//duplicate brackets
//eg:- (a+b)-(c+d) is valid
//but (a+b)-((c+d)) has duplicates;
#include<bits/stdc++.h>
using namespace std;

void isDuplicates(string x)
{
    stack<char> s;
    for(int i=0; x[i]!='\0'; i++)
    {
        s.push(x[i]);
    }

    for(int i=0; x[i]!='\0'; i++)
    {
        if(x[i]==')')
        {
            if(s.top()=='(')
            {
                cout<<"Duplicates"<<endl;
                return;
            }
            else{
                while(s.top()!='(')
                {
                    s.pop();
                }
                s.pop();
                cout<<"No duplicates"<<endl;
                return;
            }
        }
        if(x[i]=='}')
        {
            if(s.top()=='{')
            {
                cout<<"Duplicates"<<endl;
                return;
            }
            else{
                while(s.top()!='{')
                {
                    s.pop();
                }
                s.pop();
                cout<<"No duplicates"<<endl;
                return;
            }
        }
        if(x[i]==']')
        {
            if(s.top()=='[')
            {
                cout<<"Duplicates"<<endl;
                return;
            }
            else{
                while(s.top()!='[')
                {
                    s.pop();
                }
                s.pop();
                cout<<"No duplicates"<<endl;
                return;
            }
        }
    }
}

int main()
{
    string x;
    cin>>x;
    isDuplicates(x);

return 0;
}