#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data; 
    Node* next;
};

Node * createNode()
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

Node *Delete(Node *head, int i, int x)
{
    Node *temp = head;
    if(head == NULL)
        return head;
    
    if(i==0)
    {
        head = temp->next;
        delete temp;
        return head;
    }
    Node *node = Delete(head->next, i-1, x);
    head->next = node;
    return head;

}

void print(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = createNode();
    print(head);
    int i, x;
    cin>>i>>x;

    head = Delete(head, i, x);
    print(head);
return 0;
}