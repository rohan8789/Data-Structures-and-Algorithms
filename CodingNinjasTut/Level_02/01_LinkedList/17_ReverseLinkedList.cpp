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
    Node *head= NULL;
    Node *tail = NULL;
    while(n!=-1)
    {
        Node *freshNode = new Node();
        freshNode->data=n;
        if(head==NULL)
        {
            head = freshNode;
            tail=freshNode;
        }
        else{
            tail->next = freshNode;
            tail = tail->next;
        }
        cin>>n;
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
    cout<<endl<<endl;
}

Node* reverse(Node *head)
{
    Node *p =head;
    Node *q=NULL, *r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head=q;
    return head;
}

int main()
{
    Node *head = createNode();
    print(head);
    head =  reverse(head);
    print(head);
return 0;
}