#include<iostream>
#include<stack>
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
    bool isEmpty()
    {
        return size==0;
    }

    void enqueue(T element)
    {
        s1.push(element);
        size++;
    }
    T dequeue()
    {
        if(s1.empty() && s2.empty())
            return 0;
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x = s2.top();
        s2.pop();
        size--;
        return x;
    }
    T front()
    {
        if(s1.empty()&& s2.empty())
        {
            return 0;
        }
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x = s2.top();
        s2.pop();
        s2.push(x);
        return x;
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
    cout<<endl;
    cout<<q.Size()<<endl;
    cout<<q.front()<<endl;

    q.dequeue();
    q.dequeue();
    cout<<q.front()<<endl;


    while(!q.isEmpty())
    {
        cout<<q.front()<<" ";
        q.dequeue();
    }

return 0;
}