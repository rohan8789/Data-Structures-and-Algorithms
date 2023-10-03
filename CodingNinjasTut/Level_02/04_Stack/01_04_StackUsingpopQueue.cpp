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
        q1.push(element);
        size++;
    }
    void pop()
    {
        if(q1.empty())
            return;
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }

        q1.pop();
        size--;
        queue<T> q = q1;
        q1=q2;
        q2=q;
    }

    T top()
    {
        if(q1.empty())
            return 0;
        
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        T temp = q1.front();
        q1.pop();
        q2.push(temp);
        queue<T> q;
        q=q1;
        q1=q2;
        q2=q;
        return temp;
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