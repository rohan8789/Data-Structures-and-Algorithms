//lets remove the limitation of capacity
#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Queue
{
    T *arr;
    int size;
    int nextIndex;
    int frontIndex;
    int capacity;
    public:
    Queue()
    {
        arr = new int[5];
        size=0;
        nextIndex = 0;
        frontIndex = -1;
        capacity=5;
    }
    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return size==0;
    }
    int front()
    {
        if(isEmpty()){
            cout<<"Queue is EMpty"<<endl;
            return 0;
        }
        return arr[frontIndex];
    }

    void enqueue(T element)
    {
        if(size==capacity)
        {
            cout<<"Queue FULL"<<endl;
        }
        arr[nextIndex]=element;
        nextIndex = (nextIndex+1)%capacity;
        if(frontIndex==-1)
        {
            frontIndex=0;
        }
        size++;
    }

    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"queue is Empty"<<endl;
            return;
        }
       //T ans = arr[frontIndex];
        frontIndex = (frontIndex+1)%capacity;
        size--;
        if(size==0)
        {
            nextIndex=0;
            frontIndex=-1;
        }
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

    cout<<q.getSize()<<endl;
    cout<<q.front()<<endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout<<q.front()<<endl;
    cout<<q.getSize()<<endl;

    while(!q.getSize()==0)
    {
        cout<<q.front()<<" ";
        q.dequeue();
    }
return 0;
}