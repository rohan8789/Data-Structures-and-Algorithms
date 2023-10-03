#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node
{
    public:
    int data;
    Node<T> *next;
    Node()
    {
        next = NULL;
    }
};

template<typename T>
class Queue
{
    Node<T> *head;
    Node<T> *tail;
    int size;
    public:
    Queue()
    {
        head=NULL;
        tail=NULL;
        size=0;
    }
    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size==0;
    }

    T front()
    {
        if(isEmpty())
        {
            cout<<"Queue is EMpty"<<endl;
            return 0;
        }
        return head->data;
    }

    void enqueue(T element)
    {
        Node<T> *freshNode = new Node<T>();
        freshNode->data = element;
        if(head==NULL)
        {
            head = freshNode;
            tail = freshNode;
        }
        else{
            tail->next = freshNode;
            tail=tail->next;
        }
        size++;
    }

    T dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is EMpty"<<endl;
            return 0;
        }
        T ans = head->data;
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }
};

int main()
{
    cout<<endl<<endl;
    Queue<int> q;
    cout<<"Inserting in queue: ";
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout<<"Size: "<<q.getSize()<<endl;
    cout<<"front Element: "<<q.front()<<endl;

    cout<<"Removing: "<<q.dequeue()<<endl;
    cout<<"Removing: "<<q.dequeue()<<endl;
    cout<<"Removing: "<<q.dequeue()<<endl;
    cout<<"Front element now: "<<q.front()<<endl;
    cout<<"Size Now: "<<q.getSize()<<endl;

    cout<<"Inserting new ELement: ";
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);
    q.enqueue(90);
    q.enqueue(100);

    cout<<endl<<endl;
     cout<<"New Size: "<<q.getSize()<<endl;
    cout<<"front ele Now: "<<q.front()<<endl;

    cout<<"Removing Again: "<<q.dequeue()<<endl;
    cout<<"Removing Again: "<<q.dequeue()<<endl;
    cout<<"Removing Again: "<<q.dequeue()<<endl;
    cout<<"Front ele finally: "<<q.front()<<endl;
    cout<<"Size finally: "<<q.getSize()<<endl;
    cout<<endl<<endl;

return 0;
}