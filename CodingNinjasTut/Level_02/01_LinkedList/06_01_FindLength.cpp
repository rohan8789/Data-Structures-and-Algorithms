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

void print(Node *head)
{
    int count =0;
    Node *temp = head;
    while(temp!=NULL)
    {
        count++;
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<count<<endl;
}

int main()
{
    Node *head = createNode();
    print(head);

return 0;
}