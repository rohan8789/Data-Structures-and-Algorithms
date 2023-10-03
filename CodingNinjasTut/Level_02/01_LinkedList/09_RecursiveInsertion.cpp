#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

Node* createNode()
{
    int n;
    cin>>n;
    Node *head = NULL;
    Node* tail = NULL;
    while(n!=-1)
    {
        Node *freshNode = new Node();
        freshNode->data = n;
        if(head==NULL)
        {
            head = freshNode;
            tail = freshNode;
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

Node* Insert(Node *head, int i, int x)
{
    Node *freshNode = new Node();
    freshNode->data=x;
    int count=0;
    

    if(head==NULL)
        return head;
    
    if(i==0)
    {
        freshNode->next = head;
        head = freshNode;
        return head;
    }
    
    Node* node = Insert(head->next, i-1, x);
    head->next = node;
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
    int i,x;
    cin>>i>>x;
    head = Insert(head, i, x);
    print(head);
return 0;
}