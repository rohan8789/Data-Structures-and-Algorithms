#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

Node *create()
{
    int n;
    cin>>n;
    Node *head = NULL;
    Node *tail = NULL;
    while(n!=-1)
    {
        Node *freshNode = new Node();
        freshNode->data = n;
        if(head== NULL)
        {
            head = freshNode;
            tail = freshNode;
        }
        else{
            tail->next = freshNode;
            tail=tail->next;
        }
        cin>>n;
    }
    return head;
}

int search(Node *head, int x)
{
    int count=0;
    while (head!=NULL)
    {
        if(head->data==x)
            return count;
        count++;
        head=head->next;
    }
    return -1;
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
    Node *head= create();
    print(head);
    cout<<endl;
    int x;
    cin>>x;
    int z = search(head, x);
    cout<<z<<endl;
return 0;
}