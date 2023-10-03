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
            tail->next = freshNode;
            tail = tail->next;
        }
        cin>>n;
    }
    return head;
}

int Add(Node *head)
{
    int sum =0;
    while(head!=NULL)
    {
        sum = sum+head->data;
        head=head->next;
    }
    return sum;
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
    int z = Add(head);
    cout<<endl<<endl;
    cout<<z<<endl;
    return 0;
}