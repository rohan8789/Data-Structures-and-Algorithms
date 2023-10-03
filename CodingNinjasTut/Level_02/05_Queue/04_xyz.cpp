#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Queue
{
    int *arr;
    int size;
    int nextIndex;
    int frontIndex;
    int capacity;
    public:
    Queue(int totalSize){
        arr = new int[totalSize];
        capacity = totalSize;
        size=0;
        frontIndex = -1;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }

    T front()
    {
        if(isEmpty()){
            return 0;
        }
        return arr[frontIndex];
    }
    void enqueue(int element)
    {
        if(size==capacity)
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        arr[size] = element;
        size = (size+1)%capacity;
        if(frontIndex == -1)
        {
            frontIndex = 0;
        }
        size++;
    }

    T dequeue()
    {
        if(isEmpty())
        {
            cout<<"QUeue is empty"<<endl;
            return 0;
        }
        T ans = arr[frontIndex];
        frontIndex = (frontIndex+1)%capacity;
        size--;
        if(size==0)
        {
            frontIndex=-1;
        }
        return ans;
    }
};

int main()
{
    Queue<int> q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout<<q.getSize()<<endl;
    cout<<q.front()<<endl;

    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.getSize()<<endl;

    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);

    cout<<q.getSize()<<endl;
    cout<<q.front()<<endl;


return 0;
}