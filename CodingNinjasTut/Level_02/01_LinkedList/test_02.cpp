//insert element at ith position in Linked List
#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public:
    int data;
    Node *next;
};

Node *createNode()
{
    int n;
    cin>>n;
    Node *head = NULL;
    Node *tail = NULL;
    while(n!=-1)
    {
        Node *freshNode = new Node();
        freshNode->data = n;
        if(head==NULL)
        {
            head=freshNode;
            tail=freshNode;
        }
        else
        {
            tail->next = freshNode;
            tail = tail->next;
        }
        cin>>n;
    }
    return head;
}

Node *Insert(Node *head, int i, int x)
{
    int count =0;
    Node *freshNode = new Node();
    freshNode->data = x;
    Node* temp = head;
    if(i==0)
    {
        freshNode->next = head;
        head = freshNode;
        return head;
    }
    while(temp!=NULL && count<i-1)
    {
        temp = temp->next;
        count++;
    }
    if(temp!=NULL)
    {
        Node *a = temp->next;
        temp->next = freshNode;
        freshNode->next = a;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    Node *head = createNode();
    print(head);
    int i, x;
    cin>>i>>x;

    head = Insert(head, i, x);
    print(head);
return 0;
}