//Reducing Time Complexity from 0(n^2) to O(n)

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

Node* createNode(int x)
{
    int i=0;
    Node *head = NULL;
    Node *tail = NULL;
    while(i<x)
    {
        int n;
        cin>>n;
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
        i++;
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
    int n;
    cout<<"Enter size of linked list: "<<endl;
    cin>>n;
    Node *head = createNode(n);
    print(head);
return 0;
}