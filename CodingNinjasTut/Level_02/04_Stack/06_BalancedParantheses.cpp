#include<bits/stdc++.h>
using namespace std;

bool isValid(string x)
{
    int len= x.size();
    stack<char> s;
    bool ans = true;
    for(int i=0; i<len; i++)
    {
        if(x[i]=='[' || x[i]=='{' || x[i]=='(')
        {
            s.push(x[i]);
        }
        else if(x[i]==']')
        {
            if(s.top()=='[' && !s.empty())
            {
                s.pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if(x[i]=='}')
        {
            if(s.top()=='{' && !s.empty())
            {
                s.pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if(x[i]==')')
        {
            if(s.top()=='(' && !s.empty())
            {
                s.pop();
            }
            else{
                ans = false;
                break;
            }
        }
    }
    if(!s.empty())
        return false;
    return ans;
}

int main()
{
    string x;
    cin>>x;
    if(isValid(x))
        cout<<"Valid"<<endl;
    else
        cout<<"Not valid"<<endl;
return 0;
}