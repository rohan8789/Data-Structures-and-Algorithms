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
    while (n!=-1)
    {
        Node *freshNode= new Node();
        freshNode->data = n;
        if(head==NULL)
        {
            head =freshNode;
            tail = freshNode;
        }
        else{
            tail->next = freshNode;
            tail=tail->next;
        }
        cin>>n;
    }
    return head;
}

void Merge(Node *head, Node *head2)
{
    Node *t1 = NULL;
    Node *t2 = NULL;
    if(head->data<head2->data)
    {
        t1=t2=head;
        head=head->next;
        t2->next = NULL;
    }
    else{
        t1=t2=head2;
        head2=head2->next;
        t2->next = NULL;
    }
    while(head!=NULL && head2!=NULL)
    {
        if(head->data <head2->data)
        {
            t2->next = head;
            t2=head;
            head=head->next;
            t2->next = NULL;
        }
        else{
            t2->next=head2;
            t2=head2;
            head2=head2->next;
            t2->next=NULL;
        }
    }
    if(head!=NULL)
    {
        t2->next=head;
    }
    else{
        t2->next=head2;
    }
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
    Node *head2 = createNode();
    print(head2);
    Merge(head, head2);
    print(head);
return 0;
}