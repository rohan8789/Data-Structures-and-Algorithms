#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
  
};

Node* Input()
{
    int n;
    cin>>n;
    Node *head = NULL;
    while(n!=-1)
    {
        Node *freshNode = new Node();
        freshNode->data = n;
        if(head==NULL)
        {
            head  = freshNode;
        }
        else
        {
            Node *temp = head; //travelling to last Node
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next = freshNode;
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
}

int main()
{
    Node *x = Input();
    print(x);

return 0;
}