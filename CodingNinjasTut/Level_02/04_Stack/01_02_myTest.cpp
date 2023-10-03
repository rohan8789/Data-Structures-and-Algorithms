#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node 
{
    public:
    T data;
    Node<T> *next;
    Node()
    {
        next=NULL;
    }
};

template<typename T>
class Stack
{
    int size;
    Node<T> *head;
    public:
    Stack()
    {
        size=0;
        head=NULL;
    }

    int Size()
    {
        return size;
    }

    bool isEmpty()
    {
        if(size==0)
            return true;
        else
            return false;
    }

    void push(T element)
    {
        Node<T> *freshNode = new Node<T>();
        freshNode->data = element;
        if(head==NULL)
        {
            head = freshNode;
        }
        else{
            freshNode->next=head;
            head = freshNode;
        }
        size++;
    }

    T pop()
    {
        if(isEmpty())
        {
            return 0;
        }
        T ans = head->data;
        Node<T> *temp = head;
        head=head->next;
        delete temp;
        size--;
        return ans;
    }

    T top()
    {
        if(isEmpty())
            return 0;
        return head->data;
    }

    void print()
    {
        Node<T> *temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp= temp->next;
        }
    }
};

int main()
{
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.print();
    cout<<s.Size()<<endl;
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    s.print();
    cout<<s.Size()<<endl;
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    s.print();
    cout<<s.Size()<<endl;
    cout<<s.isEmpty()<<endl;



return 0;
}