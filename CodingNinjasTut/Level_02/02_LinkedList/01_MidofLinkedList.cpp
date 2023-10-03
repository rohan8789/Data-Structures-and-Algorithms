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
        if(head == NULL)
        {
            head = freshNode;
            tail = freshNode;
        }
        else{
            tail->next=freshNode;
            tail=tail->next;
        }
        cin>>n;
    }
    return head;
}

Node* Mid(Node *head, int z)
{
    Node *temp = head;
    int count=0;
    while(temp!=NULL)
    {
        if(z%2==0)
        {
            if(count==(z-1)/2)
                return temp;
        }
        else{
            if(count==z/2)
                return temp;
        }
        count++;
        temp=temp->next;
    }
    return NULL;
}

int print(Node *head)
{
    int count = 0;
    Node *temp = head;
    while(temp!=NULL)
    {
        count++;
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return count;
}

int main()
{
    Node *head = createNode();
    int z = print(head);
    Node* x = Mid(head, z);
    cout<<endl<<endl;
    cout<<x->data<<endl;

return 0;
}