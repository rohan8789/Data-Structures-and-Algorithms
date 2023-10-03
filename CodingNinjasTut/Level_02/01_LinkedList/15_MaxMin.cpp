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
    Node *head = NULL;
    Node *tail = NULL;
    while(n!=-1)
    {
        Node *freshNode  = new Node();
        freshNode->data = n;
        if(head==NULL)
        {
            head= freshNode;
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
void MaxMin(Node *head)
{
    Node *temp = head;
    int max = INT_MIN;
    int min = INT_MAX;
    while(temp!=NULL)
    {
        if(max<temp->data)
            max=temp->data;
        if(min>temp->data)
            min=temp->data;
        temp=temp->next;
    }

    cout<<endl<<endl;
    cout<<max<<" "<<min<<endl;
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
    Node *head= create();
    print(head);
    MaxMin(head);
return 0;
}