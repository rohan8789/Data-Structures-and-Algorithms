
// Sample Input 1 :
// 3 4 5 2 6 1 9 -1
// 3
// Sample Output 1 :
// 2
// Sample Input 2 :
// 3 4 5 2 6 1 9 -1
// 0
// Sample Output 2 :
// 3

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

Node* createNode()
{
    int n;
    cin>>n;
    Node *head = NULL;
    Node *tail = NULL;
    while(n!=-1)
    {
        Node *freshNode= new Node();
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

Node* Insert(Node *head, int i, int x)
{
    Node *freshNode = new Node();
    freshNode->data = x;
    int count =0;
    Node *temp = head;
    if(i==0)
    {
        freshNode->next = head;
        head = freshNode;
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
        temp->next = freshNode;
        freshNode->next = a;
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
    head = Insert(head, i, x);

    print(head);

return 0;
}