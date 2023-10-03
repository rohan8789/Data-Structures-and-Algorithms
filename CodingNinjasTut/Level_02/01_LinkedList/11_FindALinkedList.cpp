#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

};

Node* create()
{
    int n;
    cin>>n;
    Node *head= NULL;
    Node *tail = NULL;
    while(n!=-1)
    {
        Node *freshNode = new Node();
        freshNode->data = n;
        if(head ==NULL)
        {
            head= freshNode;
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

int findNode(Node *head, int x)
{
    int count=0;
    Node *temp = head;
    while(temp!=NULL)
    {
        if(temp->data==x)
            return count;
        
        count++;
        temp=temp->next;
    }
    return -1;
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
    Node *head = create();
    print(head);
    int n;
    cin>>n;

    int x = findNode(head, n);
    cout<<x<<endl;
return 0;
}