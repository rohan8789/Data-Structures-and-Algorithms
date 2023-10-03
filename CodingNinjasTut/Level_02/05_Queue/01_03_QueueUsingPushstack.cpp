#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Queue
{
    int size;
    stack<T> s1,s2;
    public:
    Queue()
    {
        size=0;
    }
    int Size()
    {
        return size;
    }
    bool isEmpty(){
        return size==0;
    }

    void enqueue(T element)
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(element);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        size++;
    }
    T dequeue()
    {
        if(isEmpty())
        {
            return 0;
        }
        int x = s1.top();
        s1.pop();
        size--;
        return x;
    }
    T front()
    {
        if(isEmpty())
        {
            return 0;
        }
        return s1.top();
    }
};

int main()
{
    Queue<int> q;
    int n;
    cin>>n;
    while(n!=-1)
    {
        q.enqueue(n);
        cin>>n;
    }
    cout<<endl<<endl;

    cout<<q.Size()<<" ";

    while(!q.isEmpty())
    {
        cout<<q.front()<<" ";
        q.dequeue();
    }
return 0;
}