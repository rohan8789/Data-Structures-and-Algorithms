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
        if(head ==NULL)
        {
            head = freshNode;
            tail = freshNode;
        }
        else
        {
            tail->next = freshNode;
            tail=tail->next;
        }
        cin>>n;
    }
    return head;
}

Node* Delete(Node *head, int i, int x)
{
    int count =0;
    Node *temp = head;
    if(i==0)
    {
        head = temp->next;
        // free(temp);
        delete temp;

        return head;
    }
    while(temp!=NULL && count<i-1)
    {
        temp=temp->next;
        count++;
    }
    if(temp!=NULL)
    {
        Node *a = temp->next;
        Node *b = a->next;
        temp->next = b;
        delete a;
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
    head = Delete(head, i, x);
    print(head);
return 0;
}