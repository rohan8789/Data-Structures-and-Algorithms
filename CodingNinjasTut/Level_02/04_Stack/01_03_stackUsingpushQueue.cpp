#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Stack
{
    int size;
    queue<T> q1, q2;
    public:
    Stack()
    {
        size=0;
    }
    int Size()
    {
        return size;
    }
    bool isEmpty()
    {
        return size==0;
    }
    void push(T element)
    {
        size++;
        
        q2.push(element);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        queue<T> q = q1;
        q1=q2;
        q2=q;
    }

    void pop()
    {
        if(q1.empty())
            return;
        size--;
        q1.pop();
    }
    T top()
    {
        if(q1.empty())
            return 0;
        return q1.front();
    }
    
};

int main()
{
    Stack<int> s;
    int n;
    cin>>n;
    while(n!=-1)
    {
        s.push(n);
        cin>>n;
    }

    cout<<s.Size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    s.pop();
    cout<<s.Size()<<endl;

    while(!s.isEmpty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
return 0;
}