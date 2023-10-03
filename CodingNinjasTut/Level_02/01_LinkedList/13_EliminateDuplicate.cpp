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
        Node *freshNode = new Node();
        freshNode->data= n;
        if(head ==NULL)
        {
            head = freshNode;
            tail = freshNode;
        }
        else{
            tail->next = freshNode;
            tail =tail->next;
        }
        cin>>n;
    }
    return head;
}

void Duplicates(Node *head)
{
    Node *temp = head;
    while(temp->next!=NULL)
    {
        if(temp->data==temp->next->data)
        {
            Node *a = temp->next->next;
            free(temp->next);
            temp->next = a;
        }
        else{
            temp=temp->next;
        }
    }
}

void print(Node *head)
{
    Node *temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    Node *head= createNode();
    print(head);
    cout<<endl<<endl;
    Duplicates(head);
    print(head);
return 0;
}