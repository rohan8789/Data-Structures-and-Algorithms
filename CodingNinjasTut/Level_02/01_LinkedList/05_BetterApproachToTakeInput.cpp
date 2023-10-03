//Reducing Time Complexity from 0(n^2) to O(n)

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
    deque<int>dq;
    dq.p
    return head;
}

Node* rotate(Node* head, int k)
    {
        if(head==NULL){
              return  NULL;
        }
        Node*curr=head;
        Node*temp=NULL;
        Node *curr1=head;
        int count=1,f=0;
        while(count<k){
            count++;
            curr=curr->next;
        }
        temp=curr->next;
        //temp->next=head;
       // curr1->next=NULL;
       // cout<<temp->data<<endl;
        // while(temp->next->next!=NULL){
        //     cout<<temp->data<<" ";
        //     temp=temp->next;
        // }
        cout<<temp->data;
        
    
    return head;
    }

void print(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        //cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    Node *head = createNode();
    print(head);
    Node* ans=rotate(head,4);
return 0;
}